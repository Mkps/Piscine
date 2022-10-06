/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 19:49:14 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/18 19:53:26 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	if (!str)
		return (1);
	i = 0;
	while (str[i])
	{
		if ('A' <= str[i] && str[i] <= 'Z')
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
	printf(" return value of fctn %i", ft_str_is_uppercase(test));
	return (0);
}
*/
