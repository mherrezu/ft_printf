/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:44:18 by mherrezu          #+#    #+#             */
/*   Updated: 2022/12/08 18:09:19 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *len)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648", len);
	}
	else if (nb < 0)
	{
		ft_putchar('-', len);
		ft_putnbr(-nb, len);
	}
	else if (nb <= 9)
	{
		ft_putchar(nb + '0', len);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10, len);
		ft_putchar(nb % 10 + '0', len);
	}
}
