/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:47:27 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/18 19:24:33 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	if (!str)
		return (1);
	i = 0;
	while (str[i])
	{
		if ('0' <= str[i] && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(int argc, char **argv)
{
	char test[255];
	
	strcpy(test_int, argv[1]);	
	printf(" return value of fctn %i", ft_str_is_numeric(test));
	return 0;
}
*/
