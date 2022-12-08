/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:03:39 by mherrezu          #+#    #+#             */
/*   Updated: 2022/12/08 18:13:44 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned(unsigned int nb, int *len)
{
	if (nb < 0)
		ft_putunsigned(-nb, len);
	if (nb <= 9)
	{
		ft_putchar(nb + '0', len);
	}
	if (nb >= 10)
	{
		ft_putunsigned(nb / 10, len);
		ft_putchar(nb % 10 + '0', len);
	}
}
