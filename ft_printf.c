/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:18:44 by sloghmar          #+#    #+#             */
/*   Updated: 2022/03/17 11:16:34 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdarg.h>

int	ft_format_type(const char *pstr, va_list arg)
{
	int	size;

	size = 0;
	if (*pstr == 'c')
		size = size + print_character(va_arg(arg, int));
	if (*pstr == 's')
		size += print_string(va_arg(arg, char *));
	if (*pstr == 'p')
		size += print_pointer(va_arg(arg, unsigned long));
	if (*pstr == 'd')
		size += print_decimal(va_arg(arg, int));
	if (*pstr == 'i')
		size += print_base10(va_arg(arg, int));
	if (*pstr == 'u')
		size += print_unsigned(va_arg(arg, unsigned int));
	if (*pstr == 'x')
		size += print_minhexa(va_arg(arg, int));
	if (*pstr == 'X')
		size += print_majhexa(va_arg(arg, int));
	if (*pstr == '%')
		size = size + print_percent();
	return (size);
}

int	ft_printf(const char *pstr, ...)
{
	va_list		arg;
	int			size;

	size = 0;
	va_start(arg, pstr);
	while (*pstr)
	{
		if (*pstr == '%')
		{
			pstr++;
			size += ft_format_type(pstr, arg);
			pstr++;
		}
		else
		{
			write(1, pstr, 1);
			pstr++;
			size++;
		}
	}
	va_end(arg);
	return (size);
}
