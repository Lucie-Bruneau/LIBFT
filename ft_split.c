/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruneau <lbruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 17:11:45 by lbruneau          #+#    #+#             */
/*   Updated: 2026/11/17 18:42:40 by lbruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	count_word(const char *str, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static	int	size_wrd(const char *str, char c, int i)
{
	int	k;

	k = 0;
	while (str[i] && str[i] != c)
	{
		k++;
		i++;
	}
	return (k);
}

char	**ft_split(const char *str, char c)
{
	char	**strs;

	int (i) = 0;
	int (d) = 0;
	if (!str)
		return (NULL);
	strs = malloc(sizeof(char *) * (count_word(str, c) + 1));
	if (!strs)
		return (NULL);
	while (str[i])
	{
		int (a) = 0;
		while (str[i] && str[i] == c)
			i++;
		if (!str[i])
			break ;
		strs[d] = malloc(size_wrd(str, c, i) + 1);
		while (str[i] && str[i] != c)
			strs[d][a++] = str[i++];
		strs[d++][a] = '\0';
	}
	strs[d] = NULL;
	return (strs);
}

/*int	main(void)
{
	char	**strs;
	char	str[] = "helloXworld";
	char    sep = 'X';
	int	i;

	i = 0;
	strs = ft_split(str, sep);
	while (strs[i])	
	{
		printf("%s\n", strs[i]);
		i++;
	}
	free(strs);
	return (0);
}*/
