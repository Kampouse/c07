/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:20:10 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/24 15:41:54 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdio.h"
#include "stdlib.h"

int	ft_strlen(char *str)
{
	char	*start;
	int		i;

	start = str;
	i = 0;
	while (*start != '\0')
	{
		start++;
		i++;
	}
	return (i);
}

char *ft_strdup(char *src)
{
	char	*copy;
	size_t	size;
	int	i;

	i = 0  ;
	size = ft_strlen(src);
	copy = (char *)malloc(size + 1);
		while(src[i])
		{
			copy[i] = src[i];
			i++;
		}
		copy[i] = '\0';

return copy;

}
int main(void)
{
    char * str;
    char * res;

    str = "music is my aeroplane";

    res = ft_strdup( str );

    printf( "The copied string is : %s", res );

    free(res); /* freedom */


    return 0;
}
