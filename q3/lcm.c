/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeroglu <aeroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 21:51:09 by aeroglu           #+#    #+#             */
/*   Updated: 2023/05/11 21:55:05 by aeroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int k;

	if(a == 0 || b == 0)
		return (0);
	if (a > b)
		k = a;
	else
		k = b;
	while (1)
	{
		if(k % a == 0 && k % b == 0)
			return (k);
		k++;
	}
}

int main()
{
	printf("%u\n", lcm(2, 3));
}