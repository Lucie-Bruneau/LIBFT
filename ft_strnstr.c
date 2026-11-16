/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruneau <lbruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 17:17:55 by lbruneau          #+#    #+#             */
/*   Updated: 2026/11/14 18:50:03 by lbruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ndl, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*ndl)
		return ((char *)hay);
	while (hay[i] && i < len)
	{
		j = 0;
		while (i + j < len && ndl[j] && hay[i + j] == ndl[j])
			j++;
		if (ndl[j] == '\0')
			return ((char *)&hay[i]);
		i++;
	}
	return (NULL);
}
