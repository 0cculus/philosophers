/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brheaume <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 13:27:45 by brheaume          #+#    #+#             */
/*   Updated: 2023/06/02 14:40:47 by brheaume         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_fd(char *src, int fd)
{
	write(fd, src, ft_strlen(src));
}

void	ft_putendl_fd(char *src, int fd)
{
	write(fd, src, ft_strlen(src));
	write(fd, "\n", 1);
}
