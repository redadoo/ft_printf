/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:34:14 by evocatur          #+#    #+#             */
/*   Updated: 2023/02/28 13:20:17 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdint.h>

int		ft_printf(const char *format, ...);
int		printstring(char *s);
int		printdigit(int n);
int		printchars(int c);
int		flag(const char *str, va_list ap);
char	*ft_uitoa(unsigned int temp);
char	*upperstring(char *s);
int		reverseprintstring(char *S);
char	*ft_itoa(int temp);
int     convertunsigned(int n);
void    reverse(char *s);
int     string_length(char *pointer);
int     print_address_hex(void* p0);
char    hex_digit(int v);
int	ft_print_ptr(unsigned long long ptr);
void	ft_put_ptr(uintptr_t num);
int	ft_ptr_len(uintptr_t num);

#endif