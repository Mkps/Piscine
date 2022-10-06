/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:33:20 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/21 09:34:14 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] && s2[i]) && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(int argc, char **argv)
{
	char	test_s1[255];
	char	test_s2[255];
	char	test_s1o[255];
	char	test_s2o[255];

	if (argc == 4)
	{
		strcpy(test_s1, argv[1]);
		strcpy(test_s1o, argv[1]);
		strcpy(test_s2, argv[2]);
		strcpy(test_s2o, argv[2]);
		printf("My; %i\n", ft_strncmp(test_s1, test_s2, atoi(argv[3])));
		printf("Original: %i\n", strncmp(test_s1o, test_s2o, atoi(argv[3])));
	}
}
*/
