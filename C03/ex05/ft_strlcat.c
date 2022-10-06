/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:21:25 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/21 10:25:47 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size_src;
	unsigned int	size_dest;

	size_src = ft_strlen(src);
	size_dest = ft_strlen(dest);
	i = ft_strlen(dest);
	j = 0;
	if (size == 0 || size < size_dest)
		return (size_src + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (size_src + size_dest);
}
/*
int	main(int argc, char **argv)
{
	char			test_src[255];
	char			test_dest[255];
	char			test_srco[255];
	char			test_desto[255];
	unsigned int	return_size;
	unsigned int	return_sizeo;

	strcpy(test_src, argv[1]);
	strcpy(test_dest, argv[2]);
	strcpy(test_srco, argv[1]);
	strcpy(test_desto, argv[2]);
	printf("src is: %s \n", test_src);
	printf("dest is: %s \n", test_dest);
	return_size = ft_strlcat(test_dest, test_src, atoi(argv[3]));
	return_sizeo = strlcat(test_desto, test_srco, atoi(argv[3]));
	printf("test_src is: %s \n", test_src);
	printf("test_dest is: %s \n", test_dest);
	printf("Return size is: %i \n", return_size);
	printf("test_srco is: %s \n", test_srco);
	printf("test_desto is: %s \n", test_desto);
	printf("Return size is: %i \n", return_sizeo);
	return (0);
}
*/
