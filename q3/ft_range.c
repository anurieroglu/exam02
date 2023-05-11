/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeroglu <aeroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 21:40:54 by aeroglu           #+#    #+#             */
/*   Updated: 2023/05/11 21:45:43 by aeroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int *ft_range(int start, int end)
{
	int *range;
	int i = (end - start) + 1;

	if(start >= end)
		return (NULL);
	range = malloc(sizeof(int) * i);
	i = 0;
	while (start <= end)
	{
		range[i] = start;
		start++;
		i++;
	}
	return (range);
}

/*int main()
{
	int *tab =ft_range(1, 5);
	int i = 0;
	while (i < 5)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}*/