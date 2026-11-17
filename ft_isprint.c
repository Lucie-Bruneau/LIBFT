/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruneau <lbruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 12:02:05 by lbruneau          #+#    #+#             */
/*   Updated: 2026/11/17 18:43:26 by lbruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_isprint(int ch)
{
	if (ch >= 32 && ch <= 126)
		return (1);
	else
		return (0);
}

/*int main()
{
    int ch = ' ';
    printf("%d\n", ft_isprint(ch));
}*/
