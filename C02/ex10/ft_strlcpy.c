/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 08:42:33 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/19 16:27:01 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<string.h>

unsigned int	ft_strlen_unsigned(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
		i++;
	return (i++);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (size != 0)
	{
		i = 0;
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen_unsigned(src));
}

/*
int	main(int argc, char **argv)
{
	char			test_src[255];
	char			test_dest[255];
	unsigned int	length;
	unsigned int	value;

	if (argc == 3)
	{
		strcpy(test_src, argv[1]);
		length = atoi(argv[2]);
		value = ft_strlcpy(test_dest, test_src, length);
		printf("Return value of strlcpy ;  %i \n", value);
		printf("test_src is: %s \n", test_src);
		printf("test_dest is: %s \n", test_dest);
	}
	return (0);
}
*/
