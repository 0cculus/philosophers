/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brheaume <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:39:49 by brheaume          #+#    #+#             */
/*   Updated: 2023/05/29 15:28:33 by brheaume         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H

# include <stdlib.h>
# include <unistd.h>
# include <pthread.h>

typedef struct	s_phi
{
	int	id;
	int	pid;
}	t_phi;

#endif
