/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:50:48 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/19 17:23:06 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size)
{
}

int	main(void)
{
	int		i;

	i = 0;
	while (i)
	{
		write(1, &i, 1);
		i++;
	}
	return (0);
}
