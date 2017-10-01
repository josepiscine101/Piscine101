/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomingo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 04:36:40 by jdomingo          #+#    #+#             */
/*   Updated: 2017/09/17 16:13:20 by jdomingo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] < 97 || str[i] > 122)
			i++;
		if (str[i] > 96 && str[i] < 123 && (str[i - 1] < 97 ||
		str[i - 1] > 122) && (str[i - 1] < 48 || str[i - 1] > 57))
			str[i] = str[i] - 32;
		while (str[i + 1] > 96 && str[i + 1] < 123)
			i++;
		i++;
	}
	return (str);
}
