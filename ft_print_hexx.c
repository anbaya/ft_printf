/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexx.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:59:05 by anbaya            #+#    #+#             */
/*   Updated: 2024/11/28 16:59:12 by anbaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexx(unsigned int nb)
{
	int				i;
	unsigned char	c;

	i = 0;
	if (nb >= 16)
	{
		i += ft_print_hexx(nb / 16);
		i += ft_print_hexx(nb % 16);
	}
	else if (nb >= 10)
	{
		c = (nb - 10) + 'A';
		i += write(1, &c, 1);
	}
	else
	{
		c = nb + '0';
		i += write(1, &c, 1);
	}
	return (i);
}
