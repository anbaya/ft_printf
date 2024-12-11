/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:58:35 by anbaya            #+#    #+#             */
/*   Updated: 2024/11/29 02:55:42 by anbaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(int c)
{
	int		i;
	char	*b;

	b = "cspdiuxX%";
	i = 0;
	while (b[i])
	{
		if (c == b[i])
			return (1);
		i++;
	}
	return (0);
}
