/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brheaume <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:39:49 by brheaume          #+#    #+#             */
/*   Updated: 2023/06/06 15:35:46 by brheaume         ###   ########.fr       */
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
	int			nb;
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

long	phi_atol(char *src);
void	phi_xfree(void *src);
void	phi_purge(t_phi *phi);
int		phi_strlen(char *src);
void	*phi_action(void *args);
int		phi_verify_args(char **av);
void	phi_init_forks(t_phi **phi);
void	phi_bzero(void *src, int size);
int		phi_error_simple(char *message);
void	*phi_calloc(int count, int size);
t_info	phi_init_info(char **av, int ac);
void	phi_putstr_fd(char *src, int fd);
void	phi_putendl_fd(char *src, int fd);
int		phi_error(char *message, t_phi **philo);
void	phi_init_philo(t_phi **phi, char **av, int ac);


#endif
