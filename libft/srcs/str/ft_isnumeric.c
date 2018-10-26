/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumeric.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 21:18:17 by zwang             #+#    #+#             */
/*   Updated: 2018/10/26 14:26:45 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_isnumeric(char *s)
{
	s += (*s == '+' || *s == '-') ? 1 : 0;
	while (*s)
		if (!ft_isdigit(*s++))
			return (false);
	return (true);
}
