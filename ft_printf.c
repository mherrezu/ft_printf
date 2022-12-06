/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:24:00 by mherrezu          #+#    #+#             */
/*   Updated: 2022/12/06 13:44:05 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	conversion(va_arg arg, char const *str)
{
	int	len;

	if (str == 'c')
		ft_putchar();
	else if (str == 's')
		ft_putstr();
	else if (str == 'p')
		ft_putptr();
	else if (str == 'd')
		ft_putnbr();
	else if (str == 'i')
		ft_putnbr();
	else if (str == 'u')
		ft_putunsigned();
	else if (str == 'x' || str == 'X')
		ft_puthex();
	else if (str == '%')
		ft_putchar('%');
	return (len);
}

int	ft_printf(char const *str, ...)
{
	int		len;
	int		i;
	va_list	arg;

	len = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			len = conversion(arg, str[i++]);
			i++;
		}
		else
			len = ft_putchar (str[i]);
		i++;
	}
	return (len);
}
