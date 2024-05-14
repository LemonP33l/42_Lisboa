/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:56:05 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/14 12:06:58 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Free the mem of the content from a specific node using the del function;
Only the mem of the content for that node must be freed (not the 'next') 
*/

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	(*del)((*lst).content);
	free (lst);
}

/*
size_t del_flag = 0;

void del(void *content)
{
	free (content);
    del_flag = 1;
}

int main()
{
	size_t *content = (size_t *)malloc(sizeof(size_t));

	*content = 1;

	t_list *node = ft_lstnew(content);


	printf("Before Deletion: %zu\n", *(size_t *)((*node).content));
	ft_lstdelone(node, &del);

	if (del_flag)
	{
		printf("Node mem freed.\n");
	}
	else
		printf("Node mem failed to free.\n");

	return (0);
}
*/
