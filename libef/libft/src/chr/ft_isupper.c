/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 13:59:20 by zwang             #+#    #+#             */
/*   Updated: 2018/09/11 10:34:06 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_chr.h"

t_bool	ft_isupper(int c)
{
	return ((c >= 'A' && c <= 'Z') ? true : false);
}
