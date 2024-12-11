/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:39:53 by anbaya            #+#    #+#             */
/*   Updated: 2024/11/28 16:39:55 by anbaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_hex(unsigned long int nb)
{
	int				i;
	unsigned char	c;

	i = 0;
	if (nb >= 16)
	{
		i += print_hex(nb / 16);
		i += print_hex(nb % 16);
	}
	else if (nb >= 10)
	{
		c = (nb - 10) + 'a';
		i += write(1, &c, 1);
	}
	else
	{
		c = nb + '0';
		i += write(1, &c, 1);
	}
	return (i);
}

int	ft_putptr(void *ptr)
{
	int					i;
	unsigned long int	add;

	if (!ptr)
		return (write(1, "(nil)", 5));
	i = 0;
	add = (unsigned long int)ptr;
	i += write(1, "0x", 2);
	i += print_hex(add);
	return (i);
}
