/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 19:25:53 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/18 19:46:48 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	if (!str)
		return (1);
	i = 0;
	while (str[i])
	{
		if ('a' <= str[i] && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(int argc, char **argv)
{
	char	test[255];

	strcpy(test, argv[1]);
	printf("Return value of fctn %i", ft_str_is_lowercase(test));
	return (0);
}
*/
