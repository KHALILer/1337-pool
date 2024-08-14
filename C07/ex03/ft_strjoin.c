/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 08:17:20 by ksadiki           #+#    #+#             */
/*   Updated: 2024/08/12 17:27:00 by ksadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	catstr(char *dst, char *src, int *index)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[*index] = src[i];
		i++;
		(*index)++;
	}
}

void	catsep(char *dst, char *sep, int *index)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		dst[*index] = sep[i];
		i++;
		(*index)++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*newstr;
	int		i;
	int		a;
	int		count;

	count = 1;
	while (a < size)
		count = count + len(strs[a++]) + len(sep);
	newstr = (char *) malloc (sizeof(char) * count);
	if (!newstr)
		return (NULL);
	a = 0;
	i = 0;
	while (a < size)
	{
		catstr(newstr, strs[a], &i);
		if (a < size - 1)
		{
			catsep(newstr, sep, &i);
		}
		a++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/*
int main()
{
	char *strs[] = {"hello", "from", "hell"};
	char *result = ft_strjoin(3, strs, " ");
	printf("%s\n", result);
}
*/
