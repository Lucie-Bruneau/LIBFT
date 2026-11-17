/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruneau <lbruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 15:25:23 by lbruneau          #+#    #+#             */
/*   Updated: 2026/11/17 19:29:29 by lbruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *str, int ch)
{
	int	i;

	i = ft_strlen(str) - 1;
	if (ch == '\0')
		return ((char *)&str[i + 1]);
	if (!str[i])
		return (NULL);
	while (i >= 0)
	{
		if (str[i] == (char)ch)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}

/*int main(void)
{
    const char str[] = "hello";
    char *resultat;

    resultat = ft_strrchr(str, 'e');

    if (resultat == NULL)
        printf("Lettre non trouvée");
    else
        printf("Touvée  : %s\n", resultat);

    return (0);
}*/
