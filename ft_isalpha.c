/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruneau <lbruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:33:05 by lbruneau          #+#    #+#             */
/*   Updated: 2026/11/14 18:48:31 by lbruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int ch)
{
	if (ch < 0)
		return (0);
	if ((((unsigned char)ch) >= 'a' && ((unsigned char)ch) <= 'z')
		|| (((unsigned char)ch) >= 'A' && ((unsigned char)ch) <= 'Z'))
		return (1);
	else
		return (0);
}

/*int main()
{
    int ch = -1;
    printf("%d\n", ft_isalpha(ch));
}*/
