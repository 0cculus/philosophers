/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brheaume <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:35:05 by brheaume          #+#    #+#             */
/*   Updated: 2023/06/05 10:07:35 by brheaume         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isstrdigit(char *src)
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

int	ft_verify_args(char **av)
{
	int	i;

	i = 0;
	while (av[j])
	{
		if (!ft_isstrdigit(av[i]))
			return (INCORRECT);
	}
	return (CORRECT);
}
