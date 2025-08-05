/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokur <aokur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:40:34 by aokur             #+#    #+#             */
/*   Updated: 2025/08/05 16:22:58 by aokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int	ft_strlen(char *str);
int	ft_nbrlen(int nb);
int	ft_unbrlen(unsigned int nb);

int	ft_putchar(char c);
int	ft_putstr(char *str);

int	ft_putnbr(int nb);
int	ft_putunbr(unsigned int nb);

int	ft_putptrtmp(unsigned long a);
int	ft_putptrsmall(unsigned long a);
int	ft_putptrbig(unsigned long a);

int	ft_printable(va_list b, char a);
int	ft_printf(const char *format, ...);
#endif