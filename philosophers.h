/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brheaume <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:39:49 by brheaume          #+#    #+#             */
/*   Updated: 2023/06/05 16:05:29 by brheaume         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H

# include <stdlib.h>
# include <unistd.h>
# include <pthread.h>

# define TINK 100
# define CORRECT 1
# define INCORRECT 0
# define TERM_OUPUT 1
# define ERROR_OUTPUT 2

typedef struct	s_info
{
	long long	slep;
	long long	droge;
	long long	death;
	long long	manger;
}	t_info;

typedef struct	s_key
{
	pthread_mutex_t *key;
	short			locked;
}	t_key;

typedef struct	s_phi
{
	int				id;
	int				pid;
	t_info 			info;
	t_key			*left;
	t_key			*right;
}	t_phi;

void	ft_purge();
int		ft_strlen(char *src);
void	*ft_action(void *args);
int		ft_verify_args(char **av);
void	ft_putstr_fd(char *src, int fd);
void	ft_putendl_fd(char *src, int fd);

#endif
