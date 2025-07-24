/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokur <aokur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:40:34 by aokur             #+#    #+#             */
/*   Updated: 2025/07/24 17:09:08 by aokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H_
# define PRINTF_H_

#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

int	ft_printf(const char *, ...);
int	printable(va_list b, char a);

#endif