/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdomingo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 08:16:12 by jdomingo          #+#    #+#             */
/*   Updated: 2017/09/20 15:34:02 by jdomingo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int d;
	int s;

	d = 0;
	s = 0;
	while (dest[d])
		d++;
	while (src[s])
	{
		dest[d + s] = src[s];
		s++;
	}
	dest[s + d] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		tot;
	int		i;
	int		len;
	char	*str;

	(void)argc;
	i = 1;
	tot = 0;
	while (argv[i] != '\0')
	{
		len = ft_strlen(argv[i]);
		i++;
		tot = tot + len + 1;
	}
	if ((str = (char*)malloc(sizeof(char*) * (tot))) == NULL)
		return (0);
	i = 1;
	while (argv[i] != '\0')
	{
		ft_strcat(str, argv[i]);
		ft_strcat(str, "\n");
		i++;
	}
	str[tot - 1] = '\0';
	return (str);
}
