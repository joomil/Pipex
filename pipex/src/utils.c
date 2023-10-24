/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:27:44 by jmilesi           #+#    #+#             */
/*   Updated: 2023/10/20 12:27:54 by jmilesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void    exit_handler(int n_exit)
{
    if (n_exit == 1)
        ft_putstr_fd("./pipex infile cmd cmd outfile\n", 2);
    exit(0);
}

int     open_file(char *file, int in_or_out)
{
    int     ret;

    if (in_or_out == 0)
        ret = open(file, O_RDONLY, 0444);
    if (in_or_out == 1)
        ret = open(file, O_WRONLY | O_CREAT | O_TRUNC, 0777)
    if (ret == -1)
        exit(0);
}