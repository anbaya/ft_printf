/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaya <anbaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:52:10 by anbaya            #+#    #+#             */
/*   Updated: 2024/12/11 20:50:41 by anbaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_format(va_list args, const char *form)
{
	int	i;

	i = 0;
	if (*form == '%')
		i += ft_putchar(37);
	else if (*form == 'c')
		i += ft_putchar(va_arg(args, int));
	else if (*form == 's')
		i += ft_putstr(va_arg(args, char *));
	else if (*form == 'p')
		i += ft_putptr(va_arg(args, void *));
	else if (*form == 'd' || *form == 'i')
		i += ft_putnbr(va_arg(args, int));
	else if (*form == 'u')
		i += ft_put_unsigned(va_arg(args, unsigned int));
	else if (*form == 'x')
		i += ft_print_hex(va_arg(args, unsigned int));
	else if (*form == 'X')
		i += ft_print_hexx(va_arg(args, unsigned int));
	return (i);
}

int	ft_printf(const char *form, ...)
{
	va_list	args;
	int		i;

	va_start(args, form);
	i = 0;
	if (!form)
		return (-1);
	while (*form)
	{
		if (*form == '%')
		{
			form++;
			if (ft_check(*form))
				i += check_format(args, form);
		}
		else
			i += ft_putchar(*form);
		form++;
	}
	return (i);
}
