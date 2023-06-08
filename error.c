/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brheaume <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 13:24:17 by brheaume          #+#    #+#             */
/*   Updated: 2023/06/08 14:59:23 by brheaume         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	phi_purge(t_phi **phi)
{
	int	i;

	i = 0;
	while (phi[i])
	{
		phi_xfree(phi[i]->right);
		phi_xfree(phi[i]->left);
		i++;
	}
	phi_xfree(phi);
}

int	phi_error(char *message, t_phi *philo)
{
	phi_putendl_fd(message, ERROR_OUTPUT);
	phi_purge(&philo);
	return (INCORRECT);
}

int	phi_error_simple(char *message)
{
	phi_putendl_fd(message, ERROR_OUTPUT);
	return (INCORRECT);
}
