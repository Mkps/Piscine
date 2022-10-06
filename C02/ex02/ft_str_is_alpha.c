/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:44:36 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/19 16:13:51 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(('A' <= str[i] && str[i] <= 'Z')
				|| ('a' <= str[i] && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(int argc, char **argv)
{
	char test[255];
	strcpy(test, argv[1]);
	printf("Return value of string %s ",test);
	printf(" return value of fctn %i", ft_str_is_alpha(test));
	return 0;
}
*/
