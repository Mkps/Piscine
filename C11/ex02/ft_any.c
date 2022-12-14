/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:18:31 by aloubier          #+#    #+#             */
/*   Updated: 2022/10/06 14:29:23 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	f_check;
	int	i;

	f_check = 0;
	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) != 0)
			f_check = 1;
		i++;
	}
	return (f_check);
}
