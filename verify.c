/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brheaume <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:35:05 by brheaume          #+#    #+#             */
/*   Updated: 2023/06/06 15:33:37 by brheaume         ###   ########.fr       */
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
	while (av[i])
	{
		if (!phi_isstrdigit(av[i]))
			return (INCORRECT);
		if (phi_strlen(av[i]) > 11)
			return (INCORRECT);
		if (phi_atol(av[i]) < INT_MIN || phi_atol(av[i]) > INT_MAX)
			return (INCORRECT);
		i++;
	}
	return (CORRECT);
}
