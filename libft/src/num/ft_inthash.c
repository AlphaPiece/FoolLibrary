/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inthash.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 11:27:32 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 11:15:37 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_num.h"

uint32_t	ft_inthash(int n)
{
	uint32_t	h;

	h = (uint32_t)n;
    h = (h + 0x7ed55d16) + (h << 12);
    h = (h ^ 0xc761c23c) ^ (h >> 19);
    h = (h + 0x165667b1) + (h << 5);
    h = (h + 0xd3a2646c) ^ (h << 9);
    h = (h + 0xfd7046c5) + (h << 3);
    h = (h ^ 0xb55a4f09) ^ (h >> 16);
    return (h);
}
