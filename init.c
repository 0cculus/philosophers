/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brheaume <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:20:21 by brheaume          #+#    #+#             */
/*   Updated: 2023/06/06 14:45:51 by brheaume         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	phi_init_forks(t_phi *phi)
{
	t_key	right;
	t_key	left;

	right = phi_calloc(1, sizeof(t_key));
	phi->right = right;
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

void	phi_init_philo(t_phi **phi, char **av, int ac)
{
		pthread_t	tid;
		long		nb;
		long		i;

		nb = phi_atol(av[1]);
		*phi = phi_calloc(nb, sizeof(t_phi));
		i = 0;
		while (i < nb)
		{
			pthread_create(&tid, NULL, phi_action, NULL);
			pthread_join(tid, NULL);
			phi[i].id = i + 1;
			phi[i].pid = tid;
			phi[i].info = phi_init_info(av, ac);
			i++;
		}
}
