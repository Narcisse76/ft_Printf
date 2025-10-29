/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:53:24 by trambure          #+#    #+#             */
/*   Updated: 2025/04/30 14:54:36 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

// Core //
int	ft_printf(const char *format, ...);

// Print //
int	ft_print_str(char *s);
int	ft_print_ptr(void *ptr);
int	ft_print_unsigned(unsigned int n);
int	ft_print_hex(unsigned int n, int upper);

// Utils //
int	ft_putchar(char c);
int	ft_putnbr(int n);

#endif
