/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_atree_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 23:27:45 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/15 00:03:36 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_atree.h"

void	ef_atree_free(t_atree *tree)
{
	if (tree)
	{
		ef_atree_clear(tree);
		free(tree);
	}
}
