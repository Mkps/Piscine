/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:49:57 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/20 13:23:18 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < nb)
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
	char			test_src[] = "Bonjour";
	char			test_dest[] = "Comment tu vas ? ";

	//strcpy(test_src, argv[1]);
	//strcpy(test_dest, argv[2]);
	//ft_strncat(test_dest, test_src, 6);
	ft_strncat(test_dest, test_src, 6);
	printf("test_src is: %s \n", test_src);
	printf("test_dest is: %s \n", test_dest);
	
	return (0);
}
*/
