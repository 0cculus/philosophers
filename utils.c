/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brheaume <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 09:47:59 by brheaume          #+#    #+#             */
/*   Updated: 2023/06/02 15:04:25 by brheaume         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int		ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

void	ft_bzero(void *src, int size)
{
	if (!src)
		return ;
	while (size--)
		((char *)src)[size] = 0;
}

void	ft_xfree(void *src)
{
	if (src)
		free(src);
	return NULL;
}

void	ft_purge()
{
	int	i;

	i = 0;
	while ()
	{
		ft_xfree();
		i++;
	}
}

long	ft_atol(char *src)
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
