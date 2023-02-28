/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utilis.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:47:37 by evocatur          #+#    #+#             */
/*   Updated: 2023/02/28 10:08:12 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	strlen2(char *s)
{
	int	i;

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
	int	i;

	i = 0;
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
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

	i = (char)c;
	write(1, &i, 1);
	return (1);
}

int	printdigit(int n)
{
	int	i;
	char *s;


	s = ft_itoa(n);
	i = printstring(s);
	free(s);
	return (i);
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

int	reverseprintstring(char *s)
{
	int	i;
	int	j;

	i = strlen2(s);
	j = 0;
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (0);
	}
	while (i != 0)
	{
		j +=printchars(s[i]);
		i--;
		printf("9%c9",s[i]);
	}
	//j +=printchars(s[i]);
	return (j);
}
