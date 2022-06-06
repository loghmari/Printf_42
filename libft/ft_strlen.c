/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:03:38 by sloghmar          #+#    #+#             */
/*   Updated: 2022/03/11 21:01:04 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
// Description: compute lengh of the string.

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
