/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 23:35:18 by ksadiki           #+#    #+#             */
/*   Updated: 2024/08/10 13:26:49 by ksadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	str_cmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	put_str(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < ac)
	{
		i = 0;
		while (av[j][i] != '\0')
		{
			write(1, &av[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*str;

	i = 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (str_cmp(av[i], av[j]) > 0)
			{
				str = av[i];
				av[i] = av[j];
				av[j] = str;
			}
			j++;
		}
		i++;
	}
	put_str(ac, av);
	return (0);
}
