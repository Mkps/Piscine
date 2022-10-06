/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 10:16:59 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/16 10:52:43 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	count;
	int	iterator;

	count = 0;
	while (count < size)
	{
		iterator = 0;
		while (iterator < size)
		{
			if (*(tab + count) < *(tab + iterator))
			{			
				swap = *(tab + count);
				*(tab + count) = *(tab + iterator);
				*(tab + iterator) = swap;
			}
			iterator++;
		}
		count++;
	}
	count = 0;
}
