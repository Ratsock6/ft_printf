/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:13:05 by aallou-v          #+#    #+#             */
/*   Updated: 2023/10/20 20:01:06 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdarg.h>
# define FD 1

# include "libft/libft.h"

int	ft_printf(const char *arg0, ...);
int	ft_printf_d(char current, va_list ap);
int	ft_printf_s(char current, va_list ap);
int	ft_printf_c(char current, va_list ap);
int	ft_printf_x(char current, va_list ap);
int	ft_printf_u(char current, va_list ap);
int	ft_printf_p(char current, va_list ap);
int	ft_printf_pourcent(char current);

int	ft_count_digits(int nb);
int	ft_count_digit_u(unsigned int n);
int	ft_count_hex_digits(unsigned long nb);
#endif
