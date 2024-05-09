/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 10:01:55 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/09 11:30:53 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Takes node new and links it to the privious first node of the list;
*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	(*new).next = *lst;
	*lst = new;
}

/*int main()
  {
  t_list *lst = NULL;
  size_t *content1 = (size_t *)malloc(sizeof(size_t));
  size_t *content2 = (size_t *)malloc(sizeof(size_t));
  size_t *content3 = (size_t *)malloc(sizeof(size_t));

 *content1 = 1;
 *content2 = 2;
 *content3 = 3;

 t_list *node1 = ft_lstnew(content1);
 t_list *node2 = ft_lstnew(content2);
 t_list *node3 = ft_lstnew(content3);

 ft_lstadd_front(&lst, node1);
 ft_lstadd_front(&lst, node2);
 ft_lstadd_front(&lst, node3);

 printf("List elements: ");
 t_list *curr = lst;
 while (curr != NULL) {
 printf("%zu ", *((size_t *)(*curr).content));
 curr = (*curr).next;
 }
 printf("\n");

 free(content1);
 free(content2);
 free(content3);
 free(node1);
 free(node2);
 free(node3);

 return (0);
 }*/
