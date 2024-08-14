/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 03:51:33 by ksadiki           #+#    #+#             */
/*   Updated: 2024/08/11 22:10:09 by ksadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	s;
	int	*arr;
	int	i;

	if (min >= max)
		return (0);
	s = max - min;
	arr = (int *) malloc (sizeof(int) * s);
	if (!arr)
		return (0);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
/*
int main ()
{
	int i = 0;
	while(i < 8)
	{
        printf("%d",ft_range(1,9)[i]);
        i++;
    }
}
*/
