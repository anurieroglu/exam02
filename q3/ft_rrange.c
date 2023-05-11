/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeroglu <aeroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 21:46:27 by aeroglu           #+#    #+#             */
/*   Updated: 2023/05/11 21:50:06 by aeroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int start, int end)
{
	int *range;
	int n = start > end ? start - end + 1 : end - start + 1;
	int dir = start < end ? 1 : -1;

	range = malloc(sizeof(int) * n);
	while (n--)
	{
		range[n] = start;
		start += dir;
	}
	return range;
}

int main()
{
	int *tab = ft_rrange(1, 5);
	int i = 0;
	while (i < 5)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}