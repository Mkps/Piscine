/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:01:54 by aloubier          #+#    #+#             */
/*   Updated: 2022/10/06 14:25:08 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list	current_node;
	int	i;

	i = 0;
	while (i < nbr)
	{
		if (begin_list == NULL)
			return (NULL);
		if (i == nbr - 1)
			return (begin_list);
		begin_list = begin_list->next;
		i++;
	}
}


