/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:06:55 by aloubier          #+#    #+#             */
/*   Updated: 2022/09/19 16:24:07 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_printable(char c)
{
	if (c >= ' ' && c <= 126)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((is_printable(str[i])))
			ft_putchar(str[i]);
		else
		{
			write(1, "\\", 1);
			ft_putchar("0123456789abcdef"[str[i] / 16]);
			ft_putchar("0123456789abcdef"[str[i] % 16]);
		}
		i++;
	}
}
/*
int	main(int argc, char **argv)
{
	char	test[255]="\nSalut\nComment vas t\tu?\n";
	//strcpy(test, argv[1]);
	ft_putstr_non_printable(test);
	return (0);
}
*/
