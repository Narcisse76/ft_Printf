/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:49:27 by trambure          #+#    #+#             */
/*   Updated: 2025/04/30 14:49:36 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_hex_len(unsigned int n)
{
	int	len;

	len = 1;
	while (n >= 16)
	{
		n /= 16;
		len++;
	}
	return (len);
}

static void	ft_put_hex(unsigned int n, int upper)
{
	const char	*base;

	if (upper)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
		ft_put_hex(n / 16, upper);
	ft_putchar(base[n % 16]);
}

int	ft_print_hex(unsigned int n, int upper)
{
	ft_put_hex(n, upper);
	return (ft_hex_len(n));
}
