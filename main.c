/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brheaume <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:00:04 by brheaume          #+#    #+#             */
/*   Updated: 2023/06/06 14:46:30 by brheaume         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	*phi_action(void *args)
{
	(void)args;
	usleep(1000);
	phi_putendl_fd("allo", TERM_OUPUT);
	return NULL;
}

int main(int ac, char **av)
{
	t_phi	*philo;

	if (ac == 5 || ac == 6)
	{
		if (!phi_verify_args(av))
			return (phi_error_simple("Invalid"));
		phi_init
	}
	else
		return (phi_error_simple("Missing arguments"));
}
