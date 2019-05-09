/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bheap_insert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 00:02:38 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/09 14:41:18 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_bheap_insert(t_bheap *heap, t_kvpair *pair)
{
	int	index;
	if (heap && pair)
	{
		ef_darray_append(heap->array, (t_value)pair);
		index = ef_darray_length(heap->array) - 1;

}
