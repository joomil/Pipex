/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:10:04 by jmilesi           #+#    #+#             */
/*   Updated: 2023/10/25 21:43:50 by jmilesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

void    exit_handler(int n_exit);


void	child(char **av, int *p_fd, char **env);
void	parent(char **av, int *p_fd, char **env);
void	exec(char *cmd, char **env);


#endif
