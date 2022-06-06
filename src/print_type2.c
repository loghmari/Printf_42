/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_type2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:32:23 by sloghmar          #+#    #+#             */
/*   Updated: 2022/03/16 16:39:44 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned(unsigned int nbr)
{
	if (nbr)
		return (ft_putnbr_fd(nbr, 1));
	else
		return (write(1, "0", 1));
}

int	print_minhexa(unsigned int hex)
{
	if (hex)
	{
		return (ft_putnbr_base(hex, "0123456789abcdef"));
	}
	else
		return (write(1, "0", 1));
}

int	print_majhexa(unsigned int hex)
{	
	if (hex)
	{
		return (ft_putnbr_base(hex, "0123456789ABCDEF"));
	}
	else
		return (write(1, "0", 1));
}

int	print_percent(void)
{
	return (write(1, "%", 1));
}
