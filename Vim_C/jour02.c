vim /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jour02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomingo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 12:32:52 by jdomingo          #+#    #+#             */
/*   Updated: 2017/09/01 13:21:50 by jdomingo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int 	ft_nputchar(char c, int n)
{
	int i;

	i=0;
	while (i < n)
		{
			ft_putchar(c);
			i = i + 1;
		}
	return (0);
}

int 	main ()
{
	ft_nputchar('@', 42);
	ft_putchar('\n');
	return (0);
}
