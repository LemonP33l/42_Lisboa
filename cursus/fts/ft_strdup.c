/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:09:45 by eduferna          #+#    #+#             */
/*   Updated: 2024/04/23 10:43:55 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Create string which is a duplicate of s;
Mem for the duplicate is obtained with malloc;
Return a pointer to the duplicate or NULL if insufficient mem was available;
*/

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len_s;
	char	*str_dup;

	i = 0;
	len_s = ft_strlen(s);
	str_dup = (char *)malloc(sizeof(*s) * (len_s + 1));
	if (str_dup == 0)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		str_dup[i] = s[i];
		i++;
	}
	str_dup[i] = '\0';
	return (str_dup);
}
