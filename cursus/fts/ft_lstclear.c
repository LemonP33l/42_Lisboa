/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:27:28 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/09 17:31:46 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Delete and free a sprecific node and every node that follows using function del;
The pointer to the list has to be NULL, and the last .next makes that happen;
*/

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*hold;

	if (!*lst || !lst || !del)
		return ;
	while (*lst)
	{
		hold = ((**lst).next);
		ft_lstdelone(*lst, del);
		*lst = hold;
	}
}

/*
int del_flag = 0;

void del(void *content) {
	free(content);
	del_flag = 1;
}

int main() {
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

	printf("Before clearing list:\n");
	t_list *curr = lst;
	while (curr) {
		printf("%zu ", *(size_t *)((*curr).content));
		curr = curr->next;
	}
	printf("\n");

	ft_lstclear(&lst, &del);

	if (lst == NULL && del_flag) {
		printf("List clear and mem freed.\n");
	} else {
		printf("Failed to clear list and free mem.\n");
	}

	return 0;
}
*/
