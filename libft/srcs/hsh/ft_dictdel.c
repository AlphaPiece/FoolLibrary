/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 13:57:47 by zwang             #+#    #+#             */
/*   Updated: 2018/10/27 14:29:21 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dictdel(t_dict **dict)
{
	if (!*dict)
		return ;
	ft_dictclear(*dict);
	free((*dict)->set);
	free(*dict);
	*dict = NULL;
}
