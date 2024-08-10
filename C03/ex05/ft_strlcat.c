/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 13:53:19 by ksadiki           #+#    #+#             */
/*   Updated: 2024/08/10 15:58:38 by ksadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;
	int	ld;
	int	ls;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	ld = i;
	ls = j;
	if (size <= ld || size == 0)
		return (size + ls);
	j = 0;
	while (src[j] != '\0' && j < size - ld - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ls + ld);
}
/*
int main()
{
	char dst[] = "khalil";
	char src[] = "sadiki";

	printf("%d\n", ft_strlcat(dst, src, 13));

	printf("%s\n", dst);
}
*/
