/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:53:51 by aloubier          #+#    #+#             */
/*   Updated: 2022/10/05 15:53:40 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swapstr(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	j;
	int	i;

	i = 0;
	while (tab[i] != 0)
	{
		j = 0;
		while (tab[j] != 0)
		{
			if (tab[j + 1] && cmp(tab[j], tab[j + 1]) > 0)
				ft_swapstr(&tab[j], &tab[j + 1]);
			j++;
		}
	i++;
	}
}
/*
int	main(void)
{
	char *test[15] = {"A", "Mkf6Hv8jN", "GT", "egJfER", "hpCld19AUk", 
	"npVlauOG9XW", "orqknaU9z7", "1Nv", "bQZOIhB8", "4", "ofQgNmDeu", 
	"T18mJrt7bU5", "OHdVaLIgj", 0};
	int	i;

	ft_advanced_sort_string_tab(test, &ft_strcmp);	
	i = 0;
	while (i < 13)
	{
		printf(" %s ,", test[i]);
		i++;
	}
	return (0);
}
*/
