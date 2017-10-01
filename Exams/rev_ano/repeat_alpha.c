/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomingo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 19:19:50 by jdomingo          #+#    #+#             */
/*   Updated: 2017/09/21 19:54:53 by jdomingo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putstr(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	char *str;
	int i;
	int j;

	str = argv[1];
	i = 0;
	j = 0;
	if (argc == 2)
	{
		while (str[i] != '\0')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				j = str[i] - 65;
				while (j >= 0)
				{
					ft_putchar(str[i]);
					j--;
				}
				i++;
			}
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				j = str[i] - 97;
				while (j >= 0)
				{
					ft_putchar(str[i]);
					j--;
				}
				i++;
			}
		}
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
