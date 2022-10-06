/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:03:20 by aloubier          #+#    #+#             */
/*   Updated: 2022/10/06 12:18:47 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_elem;

	new_elem = malloc(sizeof (t_list));
	if (!new_elem)
		return (0);
	new_elem->data = data;
	new_elem->next = *begin_list;
	*begin_list = new_elem;
}
