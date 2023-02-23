/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:27:24 by evocatur          #+#    #+#             */
/*   Updated: 2023/02/23 16:11:36 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	ap;

	va_start(ap, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			if(*s == ' ' || *s == '+')
            {
                flag((char)*s,(char *)s);
                s++;
            }
			if (*s == 'f' || *s == 'e' || *s == 'E'
				|| *s == 'g' || *s == 'G')
				printdoube(va_arg(ap,double));
			if (*s == 'd' || *s == 'i')
				printdigit(va_arg(ap, int));
			if (*s == 's')
				printstring(va_arg(ap, char *));
			if (*s == 'c')
				printchars(va_arg(ap, int));
            if (*s == 'o' || s == '#')
                printoctal(*s,va_arg(ap,int));
			s++;
		}
		if (*s)
		{
			write(1, s, 1);
			s++;
		}
	}
	va_end(ap);
	return (0);
}
