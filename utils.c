/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brheaume <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 09:47:59 by brheaume          #+#    #+#             */
/*   Updated: 2023/06/06 15:05:39 by brheaume         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int		phi_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

void	phi_bzero(void *src, int size)
{
	if (!src)
		return ;
	while (size--)
		((char *)src)[size] = 0;
}

void	phi_xfree(void *src)
{
	if (src)
		free(src);
	return NULL;
}

void	*phi_calloc(int count, int size)
{
	void	*res;

	res = mallloc(count * size + 1);
	if (res)
	{
		phi_bzero(res, count * size + 1);
		return (res);
	}
	return (NULL);
}

long	phi_atol(char *src)
{
	int		i;
	int		neg;
	long	res;

	i = 0;
	res = 0;
	neg = 1;
	while (src[i] && (src[i] == 32 || (src[i] >= 9 && src[i] <= 13)))
		i++;
	if (src[i] == '-' || src[i] == '+')
	{
		if (src[i] == '-')
			neg *= -1;
		i++;
	}
	while (src[i] >= '0' && src[i] <= '9')
	{
		res *= 10;
		res += (src[i] - '0');
		i++;
	}
	return (neg * res);
}
