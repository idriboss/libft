/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 22:34:44 by ibaby             #+#    #+#             */
/*   Updated: 2024/03/31 22:34:44 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*retval;

	i = 0;
	retval = (char *)str + i;
	while (str[i])
	{
		if (str[i] == c)
		{
			retval = (char *)str + i;
		}
		i++;
	}
	if (*retval != c)
		return (retval = 0);
	return (retval);
}

/*
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf ("%s\n%s\n", av[1], ft_strrchr(av[1], 'r'));
	}
	return (0);
}
*/