/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:01:04 by anbaya            #+#    #+#             */
/*   Updated: 2024/11/28 17:01:12 by anbaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_print_hex(unsigned int nb);
int	ft_print_hexx(unsigned int nb);
int	check_format(va_list args, const char *form);
int	ft_printf(const char *form, ...);
int	ft_put_unsigned(unsigned int n);
int	ft_putchar(int c);
int	ft_putnbr(int n);
int	ft_putptr(void *ptr);
int	ft_putstr(char *s);
int	ft_check(int c);

#endif
