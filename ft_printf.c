/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokur <aokur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:39:56 by aokur             #+#    #+#             */
/*   Updated: 2025/08/05 17:19:30 by aokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printable(va_list b, char a)
{
	if (a == 'c' || a == 's' || a == 'p'
		|| a == 'd' || a == 'i' || a == 'u'
		|| a == 'x' || a == 'X' || a == '%')
	{
		if (a == 'c')
			return (ft_putchar(va_arg(b, int)));
		else if (a == 's')
			return (ft_putstr(va_arg(b, char *)));
		else if (a == 'p')
			return (ft_putptrtmp((unsigned long)va_arg(b, void *)));
		else if (a == 'd' || a == 'i')
			return (ft_putnbr(va_arg(b, int)));
		else if (a == 'u')
			return (ft_putunbr(va_arg(b, unsigned int)));
		else if (a == 'x')
			return (ft_putptrsmall((unsigned int)va_arg(b, int)));
		else if (a == 'X')
			return (ft_putptrbig((unsigned int)va_arg(b, int)));
		else if (a == '%')
		{
			write(1, "%", 1);
			return (1);
		}
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	args;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
			count += ft_printable(args, format[++i]);
		else
			count += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
