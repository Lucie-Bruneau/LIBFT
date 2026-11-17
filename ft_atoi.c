/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruneau <lbruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 16:05:19 by lbruneau          #+#    #+#             */
/*   Updated: 2026/11/17 18:08:18 by lbruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include <string.h>

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
