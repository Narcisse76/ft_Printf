/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 13:48:27 by trambure          #+#    #+#             */
/*   Updated: 2025/04/30 13:55:57 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_str(char *str)
{
	int	len;

	if (!str)
		str = "(null)";
	len = 0;
	while (*str)
		len += ft_putchar(*str++);
	return (len);
}
