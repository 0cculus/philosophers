/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brheaume <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 13:24:17 by brheaume          #+#    #+#             */
/*   Updated: 2023/06/06 15:05:27 by brheaume         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	phi_purge(t_phi *phi)
{
	int	i;

	i = 0;
	while (phi[i])
	{
		phi_xfree();
		i++;
	}
}

int	phi_error(char *message, t_phi **philo)
{
	phi_putendl(message, ERROR_OUTPUT);
	phi_purge(philo);
	return (INCORRECT)
}

int	phi_error_simple(char *message)
{
	phi_putendl(message, ERROR_OUTPUT);
	return (INCORRECT);
}
