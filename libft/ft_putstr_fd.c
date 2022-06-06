/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:13:08 by sloghmar          #+#    #+#             */
/*   Updated: 2022/03/08 21:33:48 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Description:	Écrit la chaîne de caractères ’s’ sur le descripteur de 
//				fichier donné.

void	ft_putstr_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}	
}
/*
int main () {
	char letter[20] = "Life if good.";
   	ft_putstr_fd(letter, 1);
    return(0);
}
*/
