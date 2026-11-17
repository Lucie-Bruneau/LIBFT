/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruneau <lbruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:50:45 by lbruneau          #+#    #+#             */
/*   Updated: 2026/11/17 14:26:03 by lbruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include <string.h>

int	ft_isalnum(int ch)
{
	if (ch < 0)
		return (0);
	if ((((unsigned char)ch) >= 'a' && ((unsigned char)ch) <= 'z')
		|| ((((unsigned char)ch) >= 'A' && ((unsigned char)ch) <= 'Z'))
		|| (ch >= '0' && ch <= '9'))
		return (1);
	else
		return (0);
}

/*int main()
{
	int ch = '-1';

	printf("%d\n", ft_isalnum(ch));
}*/
