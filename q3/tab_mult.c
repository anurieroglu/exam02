/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeroglu <aeroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 21:55:52 by aeroglu           #+#    #+#             */
/*   Updated: 2023/05/11 22:02:33 by aeroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_atoi(char *str)
{
	int i = 0;
	int k = 0;

	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		k = k * 10 + str[i] - '0';
		str++;
	}
	return (k);
}

void ft_putnbr(int nbr)
{
	if(nbr >= 10)
		ft_putnbr(nbr / 10);
	write(1, &"0123456789"[nbr % 10], 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 1;
		int k;

		k = ft_atoi(av[1]);
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(k);
			write(1, " = ", 3);
			ft_putnbr(i * k);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}