/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruneau <lbruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 11:41:44 by lbruneau          #+#    #+#             */
/*   Updated: 2026/11/14 18:49:33 by lbruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)ch)
			return ((char *)&str[i]);
		i++;
	}
	if (ch == '\0')
		return ((char *)&str[i]);
	return (NULL);
}

/*int main(void)
{
    const char str[] = "hello";
    char *resultat;

    resultat = ft_strchr(str, 'e');

    if (resultat == NULL)
        printf("Lettre non trouvée");
    else
        printf("Touvée  : %s\n", resultat);

    return (0);
}*/
