/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruneau <lbruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 11:35:02 by lbruneau          #+#    #+#             */
/*   Updated: 2026/11/15 13:13:05 by lbruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst && lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*int main()
{
    t_list  *lst;
    t_list  *node2;
    t_list  *node3;

    lst = NULL;
    node2 = ft_lstnew("HELLO");
    ft_lstadd_front(&lst, node2);
    node3 = ft_lstnew("WORLD");
    ft_lstadd_front(&lst, node3);
    if (node2 == ft_lstlast(lst))
        printf("%s\n", (char *)node2->content);
    else
        printf("ERROR");
    return (0);
}*/
