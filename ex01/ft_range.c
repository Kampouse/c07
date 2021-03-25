/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 17:08:40 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/25 08:51:30 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
int	*ft_range(int min, int max)
{
	int		*ranger;
	int		i;
	int		iterator;

	i = 0;
	if (min >= max)
		return (NULL);
	else
	{
		ranger = malloc(((max - 1) - min) * (sizeof(int)));
		if (ranger == NULL)
			return (0);
		iterator = min;
		while (iterator != max - 1)
		{
			ranger[i] = iterator;
			iterator++;
			i++;
		}
		return (ranger);
	}
}
