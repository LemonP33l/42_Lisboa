/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:41:31 by eduferna          #+#    #+#             */
/*   Updated: 2024/04/17 14:04:12 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Check for a char in a string;
Return a pointer to the last occurrence of said char in string;
Return NULL if char's not found.
*/

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if ((s[i] == c))
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (NULL);
}
