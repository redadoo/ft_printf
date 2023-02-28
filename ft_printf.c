/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:27:24 by evocatur          #+#    #+#             */
/*   Updated: 2023/02/28 12:07:50 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_printf_aus(va_list ap, const char *s)
{
	if (*s == 'p')
		return(ft_printf("%#x",va_arg(ap, void*)));
	if (*s == 'u')
		return (convertunsigned(va_arg(ap, int)));
	if (*s == '%')
		return (printchars('%'));
	if (*s == 'd' || *s == 'i')
		return (printdigit(va_arg(ap, int)));
	if (*s == 's')
		return (printstring(va_arg(ap, char *)));
	if (*s == 'c')
		return (printchars(va_arg(ap, int)));
	if (*s == 'x' || *s == 'X' || *s == '#')
		return (flag((char *)s, ap));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		lenght;

	lenght = 0;
	va_start(ap, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			lenght += ft_printf_aus(ap, s);
			if (*s == '#')
				s++;
		}
		else
			lenght += printchars(*s);
		s++;
	}
	va_end(ap);
	return (lenght);
}
