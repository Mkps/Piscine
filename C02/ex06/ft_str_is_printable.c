/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 19:55:25 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/18 20:01:43 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	if (!str)
		return (1);
	i = 0;
	while (str[i])
	{
		if (32 <= str[i] && str[i] <= 126)
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
	printf(" return value of fctn %i", ft_str_is_printable(test));
	return (0);
}
*/
