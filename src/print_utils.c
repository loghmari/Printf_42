/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:00:00 by sloghmar          #+#    #+#             */
/*   Updated: 2022/03/17 11:26:07 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long nbr, char *base)
{
	int				i;
	unsigned long	j;
	unsigned long	n;

	n = nbr;
	i = 0;
	if (nbr)
	{
		j = 0;
		while (base[j] != '\0')
		{
			j++;
		}
		if (n >= j)
			ft_putnbr_base(n / j, base);
		ft_putchar_fd(base[n % j], 1);
	}
	while (nbr)
	{
		nbr /= 16;
		i++;
	}
	return (i);
}

int	ft_putnbr_fd(long n, int fd)
{
	int		i;
	char	c;
	long	nbr;

	nbr = n;
	i = 1;
	if (nbr < 0)
	{
		write(fd, "-", 1);
		i = 2;
		nbr *= -1;
	}
	if (nbr != 0)
	{
		if (nbr / 10 > 0)
			ft_putnbr_fd(nbr / 10, fd);
		c = nbr % 10 + 48;
		write(fd, &c, 1);
	}
	if (n == 0)
		write(fd, "0", 1);
	while (n && i++)
		n /= 10;
	return (i - 1);
}
