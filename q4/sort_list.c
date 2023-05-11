/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeroglu <aeroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:56:45 by aeroglu           #+#    #+#             */
/*   Updated: 2023/05/11 22:43:05 by aeroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list *sort_list(t_list lst, int (*cmp)(int, int))
{
	t_list res = lst;
	int tmp;

	while (lst->next != NULL)
	{
		if((*cmp)(lst->data, lst->next->data))
		{
			tmp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = res;
	return (lst);
}