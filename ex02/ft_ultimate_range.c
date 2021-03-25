/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 08:53:05 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/25 09:52:49 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdio.h"
#include "stdlib.h"
int	ft_ultimate_range(int **range, int min, int max)
{
	int		lenght;

	lenght = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		lenght = (max - 1) - min;
		*range = malloc(sizeof(int) * lenght);
		if (*range != NULL)
			return (**range);
		else
			return (-1);
	}
}
