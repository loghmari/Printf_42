/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:11:57 by sloghmar          #+#    #+#             */
/*   Updated: 2022/03/17 11:25:00 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include "libft.h"

int		print_character(char c);
int		print_pointer(unsigned long adr);
int		print_decimal(int nbr);
int		print_base10(int nbr);
int		print_unsigned(unsigned int nbr);
int		print_minhexa(unsigned int hex);
int		print_majhexa(unsigned int hex);
int		print_percent(void);
int		ft_printf(const char *pstr, ...);
int		ft_putnbr_base(unsigned long nbr, char *base);
int		ft_putnbr_fd(long n, int fd);
int		print_string(char *str);

#endif
