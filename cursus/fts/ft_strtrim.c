/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:02:48 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/14 12:09:23 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Create a copy of string s1 with chars in set trimed from start and end;
Mem allocation for copy done using malloc;
Return NULL if allocation fails;
*/

char	*ft_strtrim(const char *s1, const char *set)
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

/*
int main() {
    const char *str = "  Hello, world!  ";
    const char *set = " ";
    char *trimmed_str;

    trimmed_str = ft_strtrim(str, set);

    if (trimmed_str != NULL) {
        printf("Original string: '%s'\n", str);
        printf("Set to trim: '%s'\n", set);
        printf("Trimmed string: '%s'\n", trimmed_str);

        free(trimmed_str);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
*/
