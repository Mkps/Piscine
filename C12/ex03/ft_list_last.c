/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:22:15 by aloubier          #+#    #+#             */
/*   Updated: 2022/10/06 12:25:08 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_list_last(t_list *begin_list)
{
	while (begin_list)
	{
		if (begin_list->next == 0)
			return (begin_list);
		begin_list = begin_list->next;
	}
} 
