/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 09:40:43 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/25 18:06:19 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdio.h"
#include "stdlib.h"

int ft_stlen(char *str)
{
	size_t inc;
	inc = 0;
	while(*str != '\0')
	{
		inc++;	
		str++;
	}	
	return(inc);
}

char  ft_strtotalen(int size,char **str)
{
size_t output;
int inc;
size_t str_deph;
inc = 0;
str_deph = 0;

	while (inc != size)
	{
		str_deph  += ft_stlen(str[inc]);
		inc++;
	}
	output = sizeof(char) * (str_deph + size);
	return(output);
}



char	*ft_strcat(char *str1, char *str2)
{
	char	*star;

	star = str1;
	while (*star)
		star++;
	while (*str2)
		*star++ = *str2++;
		*star = '\0';
	return (str1);
}
char *ft_core(char *value,int size,char **str,char *separator)
{
	int counter;
	counter = 0;	
		while(counter < size)
	{
		ft_strcat(value,str[counter]);
		if(counter < size - 1)	
			ft_strcat(value,separator);
		counter++;
	}	

		return value;
}

char *ft_strjoin(int size,char **str,char *separator)
{
	int		counter;
	char	*output;
	size_t lenght_string;
		
	counter = 0;
	if(size == 0)
		return((char *) malloc(sizeof(char)));
	lenght_string = (ft_stlen(separator) * size) + ft_strtotalen(size,str);
	output = (char *)malloc(lenght_string + 1);
	if(output != NULL)
	{
		ft_core(output,size,str,separator);	
		output[lenght_string + 1] = '\0';	
		return output;
	}
	else
		return 0;
}

int		main(void)
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;

	strs = (char**)malloc(4 * sizeof(strs));
	strs[0] = "lddddddddddol";
	strs[1] = "1aaaaaaaaaaaaaaaaaaaa234";
	strs[2] = "poiuic";
	strs[3] = "1234";
	separator = "help";
	index = 0;
	while (index < 4)
	{
		result = ft_strjoin(index, strs, separator);
		printf("result with size = %d : $%s$\n", index, result);
		index++;
	}
}
