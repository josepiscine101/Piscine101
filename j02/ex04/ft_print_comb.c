/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomingo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 10:06:37 by jdomingo          #+#    #+#             */
/*   Updated: 2017/09/05 01:03:32 by jdomingo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char n);

void	ft_print_comb(void)
{
	int tab[3];

	tab[0] = 48;
	while (tab[0] <= 55)
	{
		tab[1] = tab[0] + 1;
		while (tab[1] <= 56)
		{
			tab[2] = tab[1] + 1;
			while (tab[2] <= 57)
			{
				ft_putchar(tab[0]);
				ft_putchar(tab[1]);
				ft_putchar(tab[2]++);
				if (tab[0] != 55)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			tab[1]++;
		}
		tab[0]++;
	}
}
