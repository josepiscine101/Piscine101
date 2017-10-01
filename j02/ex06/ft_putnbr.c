/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomingo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 09:09:55 by jdomingo          #+#    #+#             */
/*   Updated: 2017/09/18 14:02:27 by jdomingo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long	long_nb;

	long_nb = nb;
	if (long_nb < 0)
	{
		ft_putchar('-');
		long_nb = long_nb * -1;
	}
	if (nb < 10)
		ft_putchar(long_nb + '0');
	if (nb >= 10)
	{
		ft_putnbr(long_nb / 10);
		ft_putnbr(long_nb % 10);
	}
}
