/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:32:09 by anbaya            #+#    #+#             */
/*   Updated: 2024/11/28 16:32:32 by anbaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	nb;
	int		i;

	i = 0;
	nb = (long int)n;
	if (nb < 0)
	{
		i += ft_putchar('-');
		nb *= -1;
	}
	if (nb < 10)
		i += ft_putchar(nb + '0');
	else
	{
		i += ft_putnbr(nb / 10);
		i += ft_putnbr(nb % 10);
	}
	return (i);
}
