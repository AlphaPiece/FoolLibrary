/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbtree_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 16:15:16 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/10 10:56:18 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_rbtree.h"

t_rbtree	*ef_rbtree_create(f_cmp cmp_key, f_del del_key, f_del del_value)
{
	t_rbtree	*tree;

	if (!cmp_key)
		return (NULL);
	tree = ef_rbtree_alloc();
	tree->nil = ef_rbnode_alloc();
	tree->nil->color = B;
	tree->root = tree->nil;
	tree->size = 0;
	tree->cmp_key = cmp_key;
	tree->del_key = del_key;
	tree->del_value = del_value;
	return (tree);
}
