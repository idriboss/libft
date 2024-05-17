/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 22:34:56 by ibaby             #+#    #+#             */
/*   Updated: 2024/03/31 22:34:56 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
}