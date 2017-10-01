/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomingo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 01:20:44 by jdomingo          #+#    #+#             */
/*   Updated: 2017/09/20 04:13:24 by jdomingo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		range;
	int		i;

	i = 0;
	tab = NULL;
	if (min >= max)
		return (NULL);
	range = (max - min);
	if ((tab = (int*)malloc(sizeof(*tab) * (range))) == NULL)
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	tab[i] = (int)NULL;
	return (tab);
}
