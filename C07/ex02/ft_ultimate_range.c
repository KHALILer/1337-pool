/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 03:54:50 by ksadiki           #+#    #+#             */
/*   Updated: 2024/08/11 22:12:19 by ksadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	s;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	s = max - min;
	*range = (int *) malloc (sizeof(int) * s);
	if (!*range)
	{
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (s);
}
/*
int main ()
{
	int *h;
	printf("%d",ft_ultimate_range(&h,1,5));
}
*/
