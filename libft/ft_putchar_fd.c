/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:07:34 by sloghmar          #+#    #+#             */
/*   Updated: 2022/03/08 21:15:55 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Description : Écrit le caractère ’c’ sur le descripteur de fichier donné.

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main ()
{
     char letter = 'A';
     ft_putchar_fd(letter, 1);
     return(0);
}
*/
