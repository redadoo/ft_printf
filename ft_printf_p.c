/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evocatur <evocatur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:39:18 by evocatur          #+#    #+#             */
/*   Updated: 2023/02/28 11:37:26 by evocatur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_address_hex(void* p0) 
{
    int j;
    uintptr_t p;

    j = 0;
    p = (uintptr_t)p0;
    j += printchars('0'); 
    j += printchars('x');

    return (j);
}