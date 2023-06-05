/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brheaume <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:20:21 by brheaume          #+#    #+#             */
/*   Updated: 2023/06/05 16:05:20 by brheaume         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_init_forks(t_phi **phi)
{
}

t_info ft_init_info(char **av)
{
	t_info	res;

	res.death = (int)ft_atol(av[2]);
	res.manger = (int)ft_atol(av[3]);
	res.slep = (int)ft_atol(av[4]);
	res.droge = TINK;
	return (res);
}

void	ft_init_philo(t_phi **phi, char **av)
{
		pthread_t	tid;
		long		nb;
		long		i;

		nb = ft_atol(av[1]);
		i = 0;
		while (i < nb)
		{
			pthread_create(&tid, NULL, ft_action, NULL);
			pthread_join(tid, NULL);
			phi[i].id = i + 1;
			phi[i].pid = tid;
			phi[i].info 
			i++;
		}
}
