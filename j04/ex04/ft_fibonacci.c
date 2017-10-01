/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomingo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 16:48:31 by jdomingo          #+#    #+#             */
/*   Updated: 2017/09/10 17:54:50 by jdomingo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0 || index >= 47)
		return (0);
	if (index == 1)
		return (1);
	while (index > 0 && index < 47)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return(0);
}
