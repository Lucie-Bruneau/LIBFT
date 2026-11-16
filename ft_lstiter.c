/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruneau <lbruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 13:33:36 by lbruneau          #+#    #+#             */
/*   Updated: 2026/11/16 14:26:46 by lbruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!lst)
        return ;
    while (lst)
    {
        f(lst->content);
        lst = lst->next;
    }
}