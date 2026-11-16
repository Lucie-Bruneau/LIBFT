/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruneau <lbruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 21:52:38 by lbruneau          #+#    #+#             */
/*   Updated: 2026/11/14 18:49:24 by lbruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    size_t  i;

    i = 0;
    while (s[i])
    {
       write(fd, &s[i], 1);
       i++; 
    }
    write(fd, "\n", 1);
}

/*int main()
{
    ft_putendl_fd("hello", 1);
    return (0);
}*/