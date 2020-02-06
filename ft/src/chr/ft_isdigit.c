/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 14:30:34 by zwang             #+#    #+#             */
/*   Updated: 2018/09/11 10:34:52 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_chr.h"

t_bool	ft_isdigit(int c)
{
	return ((c >= '0' && c <= '9') ? true : false);
}
