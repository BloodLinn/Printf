/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrfunc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokur <aokur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 16:05:09 by aokur             #+#    #+#             */
/*   Updated: 2025/07/29 17:51:54 by aokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_nbrlen(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		i++;
	}
	if (nb == 0)
		return (1);
	while (nb)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

int	ft_unbrlen(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		i++;
	}
	if (nb == 0)
		return (1);
	while (nb)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

int	ft_putnbr(int nb) // %d için
{
	int	i;

	i = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (ft_nbrlen(nb));
	}
	else if (nb < 0)
	{
		i = ft_nbrlen(nb);
		ft_putchar('-');
		nb = -nb;
	}
	else if (nb >= 0)
		i = ft_nbrlen(nb);
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb >= 0 && nb < 10)
		ft_putchar(nb + '0');
	return (i);
}

int	ft_putunbr(unsigned int nb) //%u için
{
	if (nb < 0)
		return (ft_unbrlen(nb));
	if (nb >= 10)
	{
		ft_putunbr(nb / 10);
		ft_putunbr(nb % 10);
	}
	else if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + '0');
	}
	return (ft_unbrlen(nb));
}
