/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruneau <lbruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 18:35:31 by lbruneau          #+#    #+#             */
/*   Updated: 2026/11/14 18:47:53 by lbruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	j;

	j = 0;
	while (j < n)
	{
		((unsigned char *) s)[j] = 0;
		j++;
	}
}

/*int main()
{
    char str[] = "hello";
    ft_bzero(str, 3);
    printf("%s\n", str);
}*/
