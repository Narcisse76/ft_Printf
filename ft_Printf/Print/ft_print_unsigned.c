/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:47:48 by trambure          #+#    #+#             */
/*   Updated: 2025/04/30 14:48:14 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_unsigned_len(unsigned int n)
{
	int	len;

	len = 1;
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_put_unsigned(unsigned int n)
{
	if (n >= 10)
		ft_put_unsigned(n / 10);
	ft_putchar((char)(n % 10 + '0'));
}

int	ft_print_unsigned(unsigned int n)
{
	ft_put_unsigned(n);
	return (ft_unsigned_len(n));
}
