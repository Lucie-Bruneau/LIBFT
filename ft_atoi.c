/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruneau <lbruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 16:05:19 by lbruneau          #+#    #+#             */
/*   Updated: 2026/11/16 17:00:28 by lbruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"
/*
int	skip_sign(const char *str, int *sign)
{
	int	i;

	i = 0;
	*sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*sign *= -1;
		i++;
	}
	return (i);
}

int ft_atoi(const char *str)
{
    int i = 0;
    int tab = 0;
    int sign;
    
    if ((str[i] == '+' && str[i + 1] == '+') || 
    	(str[i] == '-' && str[i + 1] == '-'))
        return (0);
    if ((str[i] == '-' && str[i + 1] == '+') || 
    	(str[i] == '+' && str[i + 1] == '-'))
        return (0);
    i = skip_sign(str, &sign);
    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        tab = tab * 10 + (str[i] - '0');
        i++;
    }
    tab *= sign;
    return (tab);
}*/

int	ft_atoi(const char *str)
{
	int	i;
	int	tab;
	int	sign;

	i = 0;
	tab = 0;
	sign = 1;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
		return (0);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		tab = tab * 10 + (str[i] - '0');
		i++;
	}
	tab *= sign;
	return (tab);
}

/*
int main()
{
    int res = ft_atoi("         -43     g      ");
    printf("%d\n", res);
}*/
