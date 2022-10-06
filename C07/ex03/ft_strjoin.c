/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:48:40 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/29 15:41:43 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_get_full_length(int size, char **strs, char *sep)
{
	int	i;
	int	full_length;

	full_length = 0;
	i = 0;
	while (i < size)
	{
		full_length += ft_strlen(strs[i]);
		full_length += ft_strlen(sep);
		i++;
	}
	full_length -= ft_strlen(sep);
	return (full_length);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*string;
	char	*pos;

	if (size == 0)
		return (malloc(sizeof (char)));
	string = malloc(sizeof (char) * (ft_get_full_length(size, strs, sep) + 1));
	pos = string;
	if (!pos)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcpy(pos, strs[i]);
		pos += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(pos, sep);
			pos += ft_strlen(sep);
		}
		i++;
	}
	*pos = '\0';
	return (string);
}
/*
int	main(void)
{
	char *test[] = {
		"Tu",
		"peux",
		"pas",
		"test",
	};
	char sep[] = "";
	char *str;
	str = ft_strjoin(0, test, sep);
	printf("%s\n", str);
	free(str);
}
*/
