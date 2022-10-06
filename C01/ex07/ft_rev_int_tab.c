/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:42:06 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/17 17:42:05 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	count;

	count = 0;
	while (count < size / 2)
	{
		swap = *(tab + count);
		*(tab + count) = *(tab + (size - count - 1));
		*(tab + (size - count - 1)) = swap;
		count++;
	}
}
/*
int	main(void)
{
	int i;
	int size;
	int tab[] = {43, 13, 7, 76, 9};

	size = 5;
	ft_rev_int_tab(tab, size);
	i = 0;
	while(i < size)
	{
		printf("%i ,", tab[i]);
		i++;
	}
	return (0);
}
*/
