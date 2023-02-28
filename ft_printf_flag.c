/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_flag.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:47:37 by evocatur          #+#    #+#             */
/*   Updated: 2023/02/28 12:12:09 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	len(int n)
{
	int	i;

	i = 0;
	while (n)
	{
		i ++;
		n = n / 10;
	}
	return (i + 1);
}

char	*decimatohex(int decimalnumber)
{
	long int	quotient;
	int			i;
	int			temp;
	char		*hexanumber;

	i = 0;
	hexanumber = malloc(len(decimalnumber) * sizeof(char));
	quotient = decimalnumber;
	while (quotient != 0)
	{
		temp = quotient % 16;
		if (temp < 10)
			temp = temp + 48;
		else
			temp = temp + 55;
		hexanumber[i++] = temp;
		quotient = quotient / 16;
	}
	hexanumber[i++] = '\0';
	return (hexanumber);
}

int	flag(const char *str, va_list ap)
{
	char	*s;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (*str == '#')
	{
		str++;
		if (*str == 'x')
			j += printstring("0x");
		if (*str == 'X')
			j += printstring("0x");
	}
	if (*str == 'x')
	{
		s = decimatohex(va_arg(ap, int));
		printf("\n%s\n",s);
		while (s[i])
		{
			if (s[i] >= 65 && s[i] <= 90)
				s[i] = s[i] + 32;
			i++;
		}
		reverse(s);
		j += printstring(s);
		free(s);
		return (j);
	}
	if (*str == 'X')
	{
		s = decimatohex(va_arg(ap, int));
		while (s[i])
		{
			if (s[i] >= 97 && s[i] <= 122)
				s[i] = s[i] + 32;
			i++;
		}
		reverse(s);
		j += printstring(s);
		free(s);
		return (j);
	}
	return (0);
}

void reverse(char *s)
{
   int length;
   int	c;
   char *begin; 
   char	*end;
   char	temp;
 
   length = string_length(s);
   begin  = s;
   end    = s;
 
   for (c = 0; c < length - 1; c++)
      end++;
 
   for (c = 0; c < length/2; c++)
   {        
      temp   = *end;
      *end   = *begin;
      *begin = temp;
      begin++;
      end--;
   }
}
 
int string_length(char *pointer)
{
   int c;
   
   c = 0;
   while( *(pointer + c) != '\0' )
      c++;
   return (c);
}