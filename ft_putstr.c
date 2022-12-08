/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:31:13 by mherrezu          #+#    #+#             */
/*   Updated: 2022/12/08 17:58:03 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *len)
{
	int	n;

	if (!str)
		str = "(null)";
	n = 0;
	while (str[n] != '\0')
	{
		ft_putchar(str[n], len);
		n++;
	}
}
