/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 21:54:39 by zwang             #+#    #+#             */
/*   Updated: 2019/05/23 16:07:17 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_dprintf(int fd, const char *fmt, ...)
{
	va_list	args;
	int		total_char;

	va_start(args, fmt);
	total_char = ft_vdprintf(fd, fmt, args);
	va_end(args);
	return (total_char);
}
