/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_type.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:23:03 by sloghmar          #+#    #+#             */
/*   Updated: 2022/03/17 11:28:27 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_character(char c)
{
	return (write(1, &c, 1));
}

int	print_string(char *str)
{
	int	i;

	i = 0;
	if (str == 0)
		i = write(1, "(null)", 6);
	else if (*str)
	{
		i = ft_strlen(str);
		ft_putstr_fd(str, 1);
	}
	return (i);
}	

int	print_pointer(unsigned long adr)
{
	int	i;

	i = 0;
	if (adr)
	{
		ft_putstr_fd("0x", 1);
		i += 2;
		i += ft_putnbr_base(adr, "0123456789abcdef");
	}
	else
	{
		i = write(1, "0x0", 3);
	}
	return (i);
}

int	print_decimal(int nbr)
{
	if (nbr)
	{
		return (ft_putnbr_fd(nbr, 1));
	}
	else
		return (write(1, "0", 1));
}

int	print_base10(int nbr)
{
	if (nbr)
	{
		return (ft_putnbr_fd(nbr, 1));
	}
	else
		return (write(1, "0", 1));
}
