/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:27:24 by evocatur          #+#    #+#             */
/*   Updated: 2023/02/17 15:50:11 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	char	k;
	char	*w;
	
	va_start(ap, s);
	while (*s)
	{
		if (*s == '%')
			s++;
		if (*s == 's')
		{
			printstring(va_arg(ap, int));
			s++;
		}
		if (*s == 'c')
		{
			k = va_arg(ap, int);
			putchar(k);
		}
		else
			putchar(*s);
		s++;
	}
	return (0);
}
