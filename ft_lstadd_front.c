/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruneau <lbruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 16:57:59 by lbruneau          #+#    #+#             */
/*   Updated: 2026/11/17 13:36:36 by lbruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int main()
{
    t_list  *lst;
    t_list  *new;

    lst = NULL;
    new = ft_lstnew("HELLO");
    ft_lstadd_front(&lst, new);
    new = ft_lstnew("WORLD");
    ft_lstadd_front(&lst, new);

    while (lst)
    {
        printf("%s\n", (char *) lst->content);
        lst = lst->next;
    }
    return (0);
}*/
