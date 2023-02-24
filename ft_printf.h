/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:34:14 by evocatur          #+#    #+#             */
/*   Updated: 2023/02/24 13:07:43 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stddef.h>
# include <stdlib.h>
# include "libft/libft.h"

int		ft_printf(const char *format, ...);
int		printstring(char *s);
int		printdigit(int n);
int		printchars(int c);
int     flag(const char *str,va_list ap);
char	*ft_uitoa(unsigned int temp);
char	*upperstring(char *s);
int     reverseprintstring(char *S);

#endif