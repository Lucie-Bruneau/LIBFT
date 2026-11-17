/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruneau <lbruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 19:14:15 by lbruneau          #+#    #+#             */
/*   Updated: 2026/11/17 14:27:34 by lbruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include <string.h>

int	ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		ch -= 32;
	return (ch);
}

/*int main() {
    char    ch = '!';

    if (ch >= 'a' && ch <= 'z')
        printf("Lettre Majuscule    : ");
    printf("%c\n", ft_toupper(ch));
    return (0);
}*/
