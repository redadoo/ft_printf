/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utilis.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:47:37 by evocatur          #+#    #+#             */
/*   Updated: 2023/02/24 14:04:39 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int strlen2(char *s)
{
	int i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	
	return (i);
}

int	printstring(char *s)
{
	int i;

	i = 0;
	if (s == NULL)
	{
		write(1, "(null)", 6);
	}
	while (*s)
	{
		write(1, s, 1);
		i++;
		s++;
	}
	return (i);
}

int	printchars(int c)
{
	char	i;

	if (c)
	{
		i = (char)c;
		write(1, &i, 1);
		return (1);
	}
	return (0);
}

int	printdigit(int n)
{
	return (printstring(ft_itoa(n)));
}

char	*upperstring(char *s)
{
	while (s)
	{
		if (*s >= 97 && *s <= 122)
			*s = *s - 32;
		s++;
	}
	return (s);
}

int reverseprintstring(char *s)
{
	int i;
	int j;

	i = strlen2(s);
	j = i;
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (0);
	}
	while (i != 0)
	{
		write(1,&s[i],1);
		i--;
	}
	write(1,&s[i],1);
	return (j);
}