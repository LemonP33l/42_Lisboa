/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:00:55 by eduferna          #+#    #+#             */
/*   Updated: 2024/04/23 12:02:38 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Create substring from string s (using malloc for substring mem allocation);
Substring begins at index start, with a max size of len;
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str_sub;

	i = start;
	j = 0;
	str_sub = (char *)malloc(sizeof(*s) * (len + 1));
	if (str_sub == 0)
	{
		return (NULL);
	}
	while (s[i] != '\0' && j < len)
	{
		str_sub[j] = s[i];
		i++;
		j++;
	}
	str_sub[j] = '\0';
	return (str_sub);
}
