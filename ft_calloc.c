/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruneau <lbruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 12:41:38 by lbruneau          #+#    #+#             */
/*   Updated: 2026/11/17 14:30:03 by lbruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <stdint.h>
#include <string.h>

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	if (num > 0)
	{
		if (SIZE_MAX / num < size)
			return (NULL);
	}
	ptr = (void *)malloc(num * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, num * size);
	return (ptr);
	free (ptr);
}
