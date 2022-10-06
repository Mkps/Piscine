/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:10:43 by aloubier          #+#    #+#             */
/*   Updated: 2022/10/06 13:47:13 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_type	*tmp_node;

	while (begin_list != NULL)
	{
		tmp_node = begin_list;
		begin_list = begin_list->next;
		tmp_node->next = NULL;
		free(tmp_node->data);
		free(tmp_node);
	}
}
