/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomingo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 03:26:58 by jdomingo          #+#    #+#             */
/*   Updated: 2017/09/11 06:17:05 by jdomingo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_find_next_prime(int nb)
{
	int i;

	if (nb < 2)
		return (2);
	i = 2;
	while (i < nb && nb % i !=0)
		i++;
	if (i == nb)
		return(nb);
	return(ft_find_next_prime(nb + 1));
}

int		main()
{
	printf("%d", ft_find_next_prime(9977));
	return(0);
}
