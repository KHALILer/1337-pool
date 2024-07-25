/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:19:04 by ksadiki           #+#    #+#             */
/*   Updated: 2024/07/24 22:01:46 by ksadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a ;
	int	b ;

	a = '0';
	while ( a <= 98)
	{
		b = a+1;
		while (b <= 99)
		{
			ft_putchar(a/10 + 48);
			ft_putchar(a%10 + 48);
			ft_putchar(' ');
			ft_putchar(b/10 + 48);
			ft_putchar(b%10 + 48);
			if(a < 98)
			{
			ft_putchar(',');
			ft_putchar(' ');
			}	
			b++;
		}
		a++;
	}
}
int main(){
	ft_print_comb2();
}
