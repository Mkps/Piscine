/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:37:23 by aloubier          #+#    #+#             */
/*   Updated: 2022/10/05 15:51:09 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swapstr(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i] != 0)
	{
		j = 0;
		while (tab[j] != 0)
		{
			if ((tab[j + 1] != 0) && ft_strcmp(tab[j], tab[j + 1]) > 0)
				ft_swapstr(&tab[j], &tab[j + 1]);
			j++;
		}
	i++;
	}
}
/*
int	main(void)
{
	char *test[] = {"aa", "ab", "h", "1", "J", "+", 0};
	int	i;

	i = 0;
	while (test[i] != 0)
	{
		printf("%s\n", test[i]);
		i++;
	}
	ft_sort_string_tab(test);
	i = 0;
	write(1,"\n\n",2);
	while (test[i] != 0)
	{
		printf("%s\n", test[i]);
		i++;
	}
	return (0);
}
*/
