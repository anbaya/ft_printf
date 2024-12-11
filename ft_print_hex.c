/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:33:57 by anbaya            #+#    #+#             */
/*   Updated: 2024/11/28 16:54:39 by anbaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int nb)
{
	unsigned char	c;
	int				i;

	i = 0;
	if (nb >= 16)
	{
		i += ft_print_hex(nb / 16);
		i += ft_print_hex(nb % 16);
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
