/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruneau <lbruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 13:13:39 by lbruneau          #+#    #+#             */
/*   Updated: 2026/11/16 12:59:01 by lbruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *tmp;

    if (!new)
        return ;
    if (!lst)
        return ;
    if (!*lst)
    {
        *lst = new;
        return;
    }
    tmp = *lst;
    while (tmp && tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = new;
}

/*int main()
{
    t_list  *lst;
    t_list  *node2;
    t_list  *node3;

    lst = NULL;    
    node2 = ft_lstnew("HELLO");
    ft_lstadd_back(&lst, node2);
    node3 = ft_lstnew("WORLD");
    ft_lstadd_back(&lst, node3);

    while (lst)
    {
        printf("%s", lst->content);
        lst = lst->next;
    }
    return (0);
}*/