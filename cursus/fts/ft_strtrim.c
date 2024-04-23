/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:02:48 by eduferna          #+#    #+#             */
/*   Updated: 2024/04/23 14:36:46 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Create a copy of string s1 with chars in set trimed from start and end;
Mem allocation for copy done using malloc;
Return NULL if allocation fails;
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str_new;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
	{
		start++;
	}
	while (end > start && ft_strchr(set, s1[end - 1]))
	{
		end--;
	}
	str_new = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (str_new == 0)
	{
		return (NULL);
	}
	ft_strlcpy(str_new, &s1[start], (end - start + 1));
	return (str_new);
}
