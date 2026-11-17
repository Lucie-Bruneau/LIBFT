/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruneau <lbruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 12:09:33 by lbruneau          #+#    #+#             */
/*   Updated: 2026/11/14 18:49:19 by lbruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	size_t	j;

	j = 0;
	while (j < count)
	{
		((unsigned char *)pointer)[j] = ((unsigned char)value);
		j++;
	}
	return (pointer);
}

/*int main()
{
    char str[] = "hello";
    ft_memset(str, '*', 4);
    printf("%s\n", str);
}*/
