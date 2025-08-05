/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexfunc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokur <aokur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:55:55 by aokur             #+#    #+#             */
/*   Updated: 2025/08/05 16:56:02 by aokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptrtmp(unsigned long a)
{
	int	i;

	if (a == 0)
	{
		ft_putstr("(nil)");
		return (5);
	}
	i = ft_putstr("0x");
	i += ft_putptrsmall(a);
	return (i);
}

int	ft_putptrsmall(unsigned long a)
{
	char	*hex;
	int		i;

	i = 0;
	hex = "0123456789abcdef";
	if (a >= 16)
		i += ft_putptrsmall(a / 16);
	i += ft_putchar(hex[a % 16]);
	return (i);
}

int	ft_putptrbig(unsigned long a)
{
	char	*hex;
	int		i;

	i = 0;
	hex = "0123456789ABCDEF";
	if (a >= 16)
		i += ft_putptrbig(a / 16);
	i += ft_putchar(hex[a % 16]);
	return (i);
}
