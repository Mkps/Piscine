/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 20:16:27 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/19 17:23:56 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	letter_counter;

	i = 0;
	letter_counter = 0;
	while (str[i])
	{
		if (('a' <= str[i] && str[i] <= 'z')
			|| ('A' <= str[i] && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (letter_counter >= 1 && ('A' <= str[i] && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			if (letter_counter == 0 && ('a' <= str[i] && str[i] <= 'z'))
				str[i] = str[i] - 32;
			letter_counter++;
		}
		else
			letter_counter = 0;
		i++;
	}
	return (str);
}
/*
int	main(int argc, char **argv)
{
	char	test[255];
	
	strcpy(test, argv[1]);
	printf(" return value of fctn %s", ft_strcapitalize(test));
	return (0);
}
*/
