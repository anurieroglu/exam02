/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeroglu <aeroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:06:44 by aeroglu           #+#    #+#             */
/*   Updated: 2023/05/11 22:37:57 by aeroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i;
	int k;

	if(ac == 2)
	{
		i = 1;
		k = atoi(av[1]);
		if (k == 1)
			printf("1");
		while (k >= ++i)
		{
			if(k % i ==0)
			{
				printf("%d", i);
				if(k == i)
					break;
				printf("*");
				k = k / i;
				i = 1;
			}
		}
	}
	printf("\n");
}