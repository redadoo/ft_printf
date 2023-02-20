/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:27:24 by evocatur          #+#    #+#             */
/*   Updated: 2023/02/20 12:05:00 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	char c;
	va_start(ap, s);
	while (*s)
	{
		if (*s == '%')
			s++;
		if (*s == 's')
		{
			printstring(va_arg(ap, char *));
			s++;
		}
		if (*s == 'c')
		{
			c = va_arg(ap, int);
			write(1, &c, 1);
			s++;
		}
        if (*s == 'd')
		{
		    //number(va_arg(ap, int));
			s++;
		}
		if(*s)
        {
            write(1, s, 1);
		    s++;
        }

	}
	return (0);
}
