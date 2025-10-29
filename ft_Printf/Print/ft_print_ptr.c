/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trambure <trambure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:04:54 by trambure          #+#    #+#             */
/*   Updated: 2025/04/30 14:20:22 by trambure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_ptr_len(unsigned long n)
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

static void	ft_put_ptr(unsigned long n)
{
	const char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
		ft_put_ptr(n / 16);
	ft_putchar(base[n % 16]);
}

int	ft_print_ptr(void *ptr)
{
	unsigned long	addr;
	int				len;

	if (!ptr)
		return (write(1, "(nil)", 5));
	addr = (unsigned long)ptr;
	len = write(1, "0x", 2);
	ft_put_ptr(addr);
	return (len + ft_ptr_len(addr));
}
