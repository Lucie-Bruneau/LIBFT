/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruneau <lbruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 13:38:40 by lbruneau          #+#    #+#             */
/*   Updated: 2026/11/17 13:30:40 by lbruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *ptr, int ch, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)ptr)[i] == (unsigned char)ch)
			return ((void *)ptr + i);
		i++;
	}
	if (ch == '\0')
		return ((void *)ptr + i);
	return (NULL);
}

/*
char* ft_strchr(const char* str, int ch) {
    int i = 0;
    
    while (str[i])
    {
        if (str[i] == (char)ch)
            return ((char * )&str[i]);
        i++;
    }  
    if (ch == '\0')
        return ((char *)&str[i]);
    return (NULL); 
}*/

/*
int main(void)
{
    const char str[] = "hello";
    char *resultat;

    resultat = ft_memchr(str, 'e', 3);

    if (resultat == NULL)
        printf("Lettre non trouvée");
    else
        printf("Touvée  : %s\n", resultat);

    return (0);
}*/
