/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:00:42 by eduferna          #+#    #+#             */
/*   Updated: 2024/04/20 15:01:00 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Check for c in up to n bytes of memory area (pointed by s);
Both c and bytes pointed are interpreted as unsigned char;
Return a pointer to the first occurrence of said char (c);
Return NULL if char's not found;
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	chr;

	i = 0;
	str = ((unsigned char *)s);
	chr = ((unsigned char)c);
	while (i < n)
	{
		if (str[i] == chr)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
