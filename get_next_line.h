/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 22:26:50 by ibaby             #+#    #+#             */
/*   Updated: 2024/06/21 10:12:16 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char	*get_next_line(int fd);
char	*ft_strjoin(const char *s1, const char *s2);
void	del_line(char *buffer);
size_t	ft_strlen(const char *str);
void	*ft_calloc(size_t count, size_t size);
int		is_nl(char *str);
char	*ft_strdup(const char *src);
char	*re_before_line(char *all);
void	after_line(char *all, char *dest);
void	ft_clean(char *save);

#endif