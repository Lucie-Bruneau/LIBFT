/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruneau <lbruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 18:40:10 by lbruneau          #+#    #+#             */
/*   Updated: 2026/11/17 11:56:26 by lbruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	destlen;
	size_t	srclen;

	destlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size <= destlen)
		return (srclen + size);
	i = 0;
	j = destlen;
	while (src[i] && j < size - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (destlen + srclen);
}

/*int main() 
{
    char dest[20] = "Hello ";
    const char *src = "World!";
    size_t size = 30;
    size_t res = ft_strlcat(dest, src, size);

    printf("Dest   : %s\n", dest); // on affiche le mot de destination
	printf("Retour : %zu\n", res); // on affiche le resultat de dest + src
	if (res >= size) // si le resultat est plus grand que size, on affiche 
			 // le resulat en le precisant
		printf("Tronque : Le concaténage n'a pas pu être réalisé\n");
	else // si le resulat de dest + src rentre dans size, on precise
		printf("Complet : Concaténage réussi\n");
    return (0);
}*/