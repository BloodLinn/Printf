/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokur <aokur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:39:56 by aokur             #+#    #+#             */
/*   Updated: 2025/07/24 17:10:11 by aokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	printable(va_list b, char a)
{
	if (a == 'c' || a == 's' || a == 'p'
		|| a == 'd' || a == 'i' || a == 'u'
			|| a == 'x' || a == 'X' || a == '%')
			{
				if (a == 'c')
				return (ft_putchar);
				else if (a == 's')
				return (ft_putstr);
				else if (a == 'p')
				return (ft_puthex);
				else if (a == 'd')
				return (ft_putnbr);
				else if (a == 'i')
				return (ft_putnbr);
				else if (a == 'u')
				return (ft_putunbr);
				else if (a == 'x')
				return (ft_puthex);
				else if (a == 'X')
				return (ft_puthex);
				else if (a == '%')
				return (write(1, '%', 1));
			}
			return (0);
}

int	ft_printf(const char *format, ...)
{
	int	i;
	int	count;
	va_list	args;
	va_start(args, format);
	
	count = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			count += printable(args, format[++i]);
			count++;
		}
		else
			count += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
