/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:03:09 by eduferna          #+#    #+#             */
/*   Updated: 2024/04/23 13:02:07 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Create a new string resulting of the concatenation of s1 and s2;
Mem allocation for the new string is done using malloc;
Concatenation is made using ft_strlcpy and ft_strlcat;
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	len_new;
	char	*str_new;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	str_new = (char *)malloc(sizeof(*s1) * (len_s1 + len_s2 + 1));
	if (str_new == 0)
	{
		return (NULL);
	}
	len_new = ft_strlcpy(str_new, s1, (len_s1 + len_s2 + 1));
	ft_strlcat(str_new, s2, (len_new + len_s2 + 1));
	return (str_new);
}
