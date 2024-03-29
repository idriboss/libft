/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 15:45:16 by marvin            #+#    #+#             */
/*   Updated: 2024/03/29 15:45:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    else
        return (0);
}