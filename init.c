/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brheaume <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:20:21 by brheaume          #+#    #+#             */
/*   Updated: 2023/06/08 14:50:08 by brheaume         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	phi_init_forks(t_phi *phi)
{
	t_key	*right;

	right = phi_calloc(1, sizeof(t_key));
	phi->right = right;
	phi->left = NULL;
}

t_info	phi_init_info(char **av, int ac)
{
	t_info	res;

	res.death = phi_atol(av[2]);
	res.manger = phi_atol(av[3]);
	res.slep = phi_atol(av[4]);
	res.droge = TINK;
	if (ac == 6)
		res.nb_meals = (int)phi_atol(av[5]);
	else
		res.nb_meals = -1;
	return (res);
}

void	phi_init_philo(t_phi *phi, int ac, char **av)
{
	long	nb;
	long	i;

	nb = phi_atol(av[1]);
	phi = phi_calloc(nb, sizeof(t_phi));
	i = 0;
	while (i < nb)
	{
		phi[i].id = i + 1;
		phi[i].info = phi_init_info(av, ac);
		i++;
	}
}
