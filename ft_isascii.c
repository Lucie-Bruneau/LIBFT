/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruneau <lbruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:56:09 by lbruneau          #+#    #+#             */
/*   Updated: 2026/11/17 14:26:09 by lbruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include <string.h>

int	ft_isascii(int ch)
{
	if (ch >= 0 && ch <= 127)
		return (1);
	else
		return (0);
}

/*int main()
{
    int ch = ' ';
    printf("%d\n", ft_isascii(ch));
}*/
