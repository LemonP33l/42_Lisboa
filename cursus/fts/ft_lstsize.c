/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:57:58 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/09 12:21:54 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Counts number of nodes in list lst;
*/

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		i++;
		lst = (*lst).next;
	}
	return (i);
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

	printf("List size: ");
	
	printf("%d", ft_lstsize(lst));
	printf("\n");

	free(content1);
	free(content2);
	free(content3);
	free(node1);
	free(node2);
	free(node3);

	return (0);
}*/
