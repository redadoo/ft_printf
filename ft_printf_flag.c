/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_flag.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:47:37 by evocatur          #+#    #+#             */
/*   Updated: 2023/02/24 14:06:27 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int len(int n)
{
	int i;

	i = 0;
	while (n)
	{
		i ++;
		n = n / 10;		
	}
	return (i + 1);
	
}

char *decimatohex(int decimalnumber)
{
	long int quotient;
    int i;
	int temp;
    char *hexadecimalNumber;

	i = 0;
	hexadecimalNumber = malloc(len(decimalnumber) * sizeof(char));
    quotient = decimalnumber;
    while(quotient!=0) 
	{
        temp = quotient % 16;
        if ( temp < 10)
                   temp =temp + 48; 
		else
                 temp = temp + 55;
        hexadecimalNumber[i++]= temp;
        quotient = quotient / 16;
    }
	hexadecimalNumber[i++] = '\0';
    return (hexadecimalNumber);
}

int	flag(const char *str,va_list ap)
{
	char	*s;
	int		i;

	i = 0;
	if(*str == 'x')
	{
		s = decimatohex(va_arg(ap, int));
		while (s[i])
		{
			if (s[i] >= 65 && s[i] <= 90)
				s[i] = s[i] + 32;
			i++;
		}
		return(reverseprintstring(s));
	}
	if(*str == 'X')
	{
		s = decimatohex(va_arg(ap, int));
		while (s[i])
		{
			if (s[i] >= 97 && s[i] <= 122)
				s[i] = s[i] + 32;
			i++;
		}
		return(reverseprintstring(s));
	}
	if(*str == '#')
	{
		str++;
		if(*str == 'x')
			write(1,"0x",2);
		if(*str == 'X')
			write(1,"0X",2);
		flag(str,ap);
	}
	return (0);
}