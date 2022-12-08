/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:57:58 by mherrezu          #+#    #+#             */
/*   Updated: 2022/12/08 18:18:12 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(char const *str, ...);
void	ft_putchar(char a, int *len);
void	ft_puthex(unsigned long int nb, char *base, int *len);
void	ft_putnbr(int nb, int *len);
void	ft_putstr(char *str, int *len);
void	ft_putunsigned(unsigned int nb, int *len);

#endif