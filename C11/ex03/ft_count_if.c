/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:30:09 by aloubier          #+#    #+#             */
/*   Updated: 2022/10/05 16:48:12 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	f_count;

	i = 0;
	f_count = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			f_count++;
		i++;
	}
	return (f_count);
}
