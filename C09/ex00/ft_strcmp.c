/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:19:21 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/20 12:56:40 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] && s2[i]))
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(int argc, char **argv)
{
	char	test_s1[255];
	char	test_s2[255];
	int		ft_return;

	if (argc == 3)
	{
		strcpy(test_s1, argv[1]);
		strcpy(test_s2, argv[2]);
		printf("Return value of %i\n", ft_strcmp(test_s1, test_s2));
	}
}
*/
