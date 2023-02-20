/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utilis.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:47:37 by evocatur          #+#    #+#             */
/*   Updated: 2023/02/20 12:07:32 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	printstring(char *s)
{
    if(s == NULL)
    {
        write(1,"(null)",6);
    }
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
}

void number(int i)
{
    char *s = NULL;
    s = ft_itoa(i);
    printstring(s);
}
