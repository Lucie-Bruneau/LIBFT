/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruneau <lbruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:44:19 by lbruneau          #+#    #+#             */
/*   Updated: 2026/11/17 14:25:53 by lbruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include <string.h>

int	ft_isdigit(int ch)
{
	if (ch >= '0' && ch <= '9')
		return (1);
	else
		return (0);
}

/*int main()
{
    int ch = '1';
    
    if (ft_isdigit(ch))
        printf("IS digit    :   %d\n", ft_isdigit(ch));
    else 
        printf("IS NOT digit    :   %d\n", ft_isdigit(ch));
        
}*/
