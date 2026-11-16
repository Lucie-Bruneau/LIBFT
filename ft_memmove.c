/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruneau <lbruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 14:42:46 by lbruneau          #+#    #+#             */
/*   Updated: 2026/11/14 18:49:02 by lbruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	size_t	i;
	size_t	tmp;

	i = 0;
	while (i < count)
	{
		tmp = src[i];
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*int main()
{
	char str[] = "lucie";
	ft_memmove(str + 1, str, 4);










	printf("%s\n", str);
}*/
