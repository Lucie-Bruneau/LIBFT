/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruneau <lbruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 14:42:46 by lbruneau          #+#    #+#             */
/*   Updated: 2026/11/17 14:27:21 by lbruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include <string.h>

void	*ft_space(void *dest, const void *src, size_t count)
{
	unsigned char	*tmpd;

	tmpd = (unsigned char *)dest;
	while (count > 0)
	{
		tmpd[count - 1] = ((unsigned char *)src)[count - 1];
		count--;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	unsigned char	*tmpd;
	size_t			i;

	i = 0;
	if (!count)
		return (dest);
	if (!src)
		return (NULL);
	if (dest == src)
		return (dest);
	tmpd = (unsigned char *)dest;
	if (tmpd > ((unsigned char *)src) && tmpd < ((unsigned char *)src) + count)
		ft_space(dest, src, count);
	else
	{
		while (i < count)
		{
			tmpd[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/*int main()
{
	char str[] = "MORDOR";
	ft_memmove(str + 4, str, 2);
	







	printf("%s\n", str);
}*/
