/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:41:44 by aloubier          #+#    #+#             */
/*   Updated: 2022/10/06 13:06:55 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_list_push_strs(int size, char **strs)
{
	int	i;
	t_list	new_node;
	t_list	prev_node;

	prev_node = NULL;
	i = 0;
	while (i < size)
	{
		new_node = ft_create_elem(strs[i]);
		new_node->next = prev_node;
		prev_node = new_node;
		i++;
	}
	return (new_node);
}
