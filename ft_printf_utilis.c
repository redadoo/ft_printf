/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utilis.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:47:37 by evocatur          #+#    #+#             */
/*   Updated: 2023/02/23 16:06:46 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	printstring(char *s)
{
	if (s == NULL)
	{
		write(1, "(null)", 6);
	}
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
}

void	printchars(int c)
{
	char	i;

	if (c)
	{
		i = (char)c;
		write(1, &i, 1);
	}
}

void	printdigit(int n)
{
	printstring(ft_itoa(n));
}

void	printoctal(char *s,int n)
{
    int octalNumber = 0;
    int i = 1;

    while (n != 0) {
        octalNumber += (n % 8) * i;
        n /= 8;
        i *= 10;
    }
    printdigit(octalNumber);
}

void	printdouble(double n)
{
	
	
}
