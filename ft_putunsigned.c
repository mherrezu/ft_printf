/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:03:39 by mherrezu          #+#    #+#             */
/*   Updated: 2022/12/06 12:10:11 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(unsigned int nb);

void	ft_putunsigned(unsigned int nb)
{
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb);
	}
	else if (nb >= 10)
	{
		ft_putunsigned(nb / 10);
		ft_putunsigned(nb % 10);
	}
}

void	ft_putchar(int a)
{
	unsigned int	b;

	b = a + 48;
	write (1, &b, 1);
}
