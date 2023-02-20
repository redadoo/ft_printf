/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utilis.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:47:37 by evocatur          #+#    #+#             */
/*   Updated: 2023/02/20 10:15:32 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	printstring(char *s)
{
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
}

void flag(char *str)
{
	char c;

	c = *str;
}
