/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:25:31 by aloubier          #+#    #+#             */
/*   Updated: 2022/10/06 12:39:30 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list new_elem;

	while (begin_list->next)
	{
		begin_list = begin_list->next;
	}

	new_elem = ft_create_elem(data);
	*begin_list->next = new_elem;
}
