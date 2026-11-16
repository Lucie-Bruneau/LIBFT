/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruneau <lbruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 17:15:08 by lbruneau          #+#    #+#             */
/*   Updated: 2026/11/14 18:49:46 by lbruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_len(char const *s1, char const *s2)
{
	size_t	onelen;
	size_t	twolen;
	size_t	len;

	onelen = ft_strlen(s1);
	twolen = ft_strlen(s2);
	len = onelen + twolen;
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strs;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1)
		return (NULL);
	if (!s2)
		return (NULL);
	ft_len(s1, s2);
	strs = malloc(sizeof(char) * ft_len(s1, s2) + 1);
	if (!strs)
		return (NULL);
	while (s1[i])
	{
		strs[i] = s1[i];
		i++;
	}
	while (s2[j])
		strs[i++] = s2[j++];
	strs[i] = '\0';
	return (strs);
}

/*int main()
{
    char *str = ft_strjoin("Hello ", "World");

    printf("%s\n", str);
    
    free(str);
    return (0);
}*/
