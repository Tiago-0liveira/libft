/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:32:44 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/04/13 23:16:49 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *src);

char	*ft_strdup(const char *s)
{
	char	*d;
	size_t	c;

	d = malloc(ft_strlen(s) * sizeof(char));
	c = 0;
	if (d == NULL)
		return (NULL);
	while (s[c])
	{
		d[c] = s[c];
		c++;
	}
	return (d);
}
