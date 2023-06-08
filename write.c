/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brheaume <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 13:27:45 by brheaume          #+#    #+#             */
/*   Updated: 2023/06/08 14:37:17 by brheaume         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	phi_putstr_fd(char *src, int fd)
{
	write(fd, src, phi_strlen(src));
}

void	phi_putendl_fd(char *src, int fd)
{
	write(fd, src, phi_strlen(src));
	write(fd, "\n", 1);
}
