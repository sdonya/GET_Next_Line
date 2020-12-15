/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonya <sdonya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:39:16 by sdonya            #+#    #+#             */
/*   Updated: 2019/11/13 15:51:50 by sdonya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct				s_get_next_line
{
	int						fd;
	char					*remainder;
	struct s_get_next_line	*next;
}							t_get_next_line;

# define BUFF_SIZE 32

int							get_next_line(const int fd, char **line);

#endif
