/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruneau <lbruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 13:30:56 by lbruneau          #+#    #+#             */
/*   Updated: 2026/11/14 18:50:12 by lbruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_rtrn(char const *s1)
{
	char	*without;

	if (s1[0] == '\0')
	{
		without = malloc(1);
		if (!without)
			return (NULL);
		without[0] = '\0';
		return (without);
	}
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*without;
	size_t	len;

	size_t (i) = 0;
	size_t (start) = 0;
	if (s1[0] == '\0')
		return (ft_rtrn(s1));
	size_t (end) = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	len = (end - start) + 1;
	without = malloc(sizeof(char) * (len + 1));
	if (!without)
		return (NULL);
	while (i < len)
	{
		without[i] = s1[start + i];
		i++;
	}
	without[i] = '\0';
	return (without);
}

/*int main()
{
    char *str = ft_strtrim("xxxHelloxxx", "x");

    printf("%s\n", str);
    
    free(str);
    return (0);
}*/
