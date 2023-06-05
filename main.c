/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brheaume <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:00:04 by brheaume          #+#    #+#             */
/*   Updated: 2023/06/05 16:04:49 by brheaume         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	*ft_action(void *args)
{
	(void)args;
	usleep(1000);
	ft_putendl_fd("allo", TERM_OUPUT);
	return NULL;
}

int main(int ac, char **av)
{
	t_phi	*philo;

	if (ac == 6 || ac == 7)
	{
		if (!ft_verify_args(av))
			return (ft_error_simple("Invalid"));
	}
	else
		return (ft_error_simple("Missing arguments"));
}
