/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:13:57 by eduferna          #+#    #+#             */
/*   Updated: 2024/04/23 09:40:08 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Compare the first n bytes of the memory areas s1 and s2 (as unsigned chars);
Returns an int less than, equal to, or greater than 0
(respectively: s1 <, >, = s2);
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*new_s1;
	unsigned char	*new_s2;

	i = 0;
	new_s1 = ((unsigned char *)s1);
	new_s2 = ((unsigned char *)s2);
	while (i < n && (new_s1[i] == new_s2[i]))
	{
		i++;
	}
	if (i == n)
		return (0);
	else
		return (new_s1[i] - new_s2[i]);
}
