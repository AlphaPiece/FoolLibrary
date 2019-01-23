/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 09:53:15 by zwang             #+#    #+#             */
/*   Updated: 2019/01/22 22:35:41 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_pow(double n, int pow)
{
	double	m;

    if (n == 0)
        return (1);
    if (n < 0)
        return (1 / (x * ft_pow(x, -(n + 1))));
    if (n % 2 == 0)
    {
        m = ft_pow(x, n / 2);
        return (m * m);
    }
    if (n % 3 == 0)
    {
        m = ft_pow(x, n / 3);
        return (m * m * m);
    }
    return (x * ft_pow(x, n - 1));
}
