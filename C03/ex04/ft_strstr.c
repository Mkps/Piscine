/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:17:19 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/20 12:16:59 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *string, char *to_find)
{
	int	i;
	int	found_char;

	i = 0;
	if (!to_find[i])
		return (&string[i]);
	found_char = 0;
	while (string[i])
	{
		while ((string[i + found_char] == to_find[found_char])
			&& string[i + found_char])
		{
			if (!to_find[found_char + 1])
				return (&string[i]);
			found_char++;
		}
		found_char = 0;
		i++;
	}
	return (0);
}
/*
int	main(int argc, char **argv)
{
	char	needle[] = "taupe";
	char	haystack[] = "Breakfast";
	char	*return_value;

	//if (argc == 3)
	//{
//		strcpy(haystack, argv[1]);
//		strcpy(needle, argv[2]);
		return_value = strstr(haystack, needle);
		printf("return_value is : %c \n", *return_value);
	//}
	return (0);
}
*/
