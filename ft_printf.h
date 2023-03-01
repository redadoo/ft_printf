/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:34:14 by evocatur          #+#    #+#             */
/*   Updated: 2023/03/01 12:58:51 by evocatur         ###   ########.fr       */
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
char	*ft_itoa(int temp);
int		convertunsigned(int n);
void	reverse(char *s);
int		string_length(char *pointer);
int		print_address_hex(void *p0);
char	hex_digit(int v);
int		ft_print_ptr(unsigned long long ptr);
void	ft_put_ptr(uintptr_t num);
int		ft_ptr_len(uintptr_t num);
int		printhex(const char *str, va_list ap);
int		flag_sharp(const char *str, unsigned int j);
int		flag_space(const char *s, va_list ap);
int		flag_plus(const char *str, va_list ap);
int		ft_len_hex(unsigned int num);
void	ft_put_hex(unsigned int num, char c);

#endif