/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeroglu <aeroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:44:16 by aeroglu           #+#    #+#             */
/*   Updated: 2023/05/11 22:39:59 by aeroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void sort_int(int *tab, unsigned int size)
{
	unsigned int i = 0;
	int tmp;

	while (i < size - 1)
	{
		if(tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}

void print_arr(int *tab, unsigned int size)
{
    unsigned int i = 0;
    while (i < size)
    {
        printf("%d, ", tab[i]);
        i++;
    }
    printf("\n");
}

int main()
{
	int tab[] = {5, -4, 3, -2, 1, 0};
	print_arr(tab, 6);
	sort_int(tab, 6);
	print_arr(tab, 6);
}