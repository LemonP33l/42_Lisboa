/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:33:09 by eduferna          #+#    #+#             */
/*   Updated: 2024/04/10 15:45:07 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Concatenate from src to dst;
Append up to size - strlen(dst) -1 bytes, and NUL terminate the result;
Return = initial dst lentgh + src length;
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;
	size_t	final;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	final = dst_len + src_len;
	if (size <= dst_len)
	{
		return (size + src_len);
	}
	while (src[i] != '\0' && dst_len + i < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (final);
}
