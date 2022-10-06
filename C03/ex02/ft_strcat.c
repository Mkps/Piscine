/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:22:55 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/20 13:18:19 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(int argc, char **argv)
{
	char			test_src[255];
	char			test_dest[255];

	if (argc == 3)
	{
		strcpy(test_src, argv[2]);
		strcpy(test_dest, argv[1]);
		ft_strcat(test_dest, test_src);
		printf("test_src is: %s \n", test_src);
		printf("test_dest is: %s \n", test_dest);
	}
	return (0);
}
*/
