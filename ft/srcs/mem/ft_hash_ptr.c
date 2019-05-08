/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 13:05:32 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/07 21:27:40 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uint32_t	ft_hash_ptr(void *p)
{
	uint32_t	h;
	
	h = (uint32_t)p;
    h = h ^ (h >> 4);
    h = (h ^ 0xdeadbeef) + (h << 5);
    h = h ^ (h >> 11);
    return (h);
}
