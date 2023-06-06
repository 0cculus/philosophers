/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brheaume <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:35:05 by brheaume          #+#    #+#             */
/*   Updated: 2023/06/06 14:46:50 by brheaume         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	phi_isstrdigit(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		if (src[i] < '0' || src[i] > '9')
			return (INCORRECT);
		i++;
	}
	return (CORRECT);
}

int	phi_verify_args(char **av)
{
	int	i;

	i = 0;
	while (av[j])
	{
		if (!phi_isstrdigit(av[i]))
			return (INCORRECT);
	}
	return (CORRECT);
}
