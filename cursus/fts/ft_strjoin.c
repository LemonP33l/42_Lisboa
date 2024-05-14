/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:03:09 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/14 12:08:39 by eduferna         ###   ########.fr       */
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

/*
int main() {
    const char *str1 = "Hello, ";
    const char *str2 = "world!";
    char *joined_str;

    joined_str = ft_strjoin(str1, str2);

    if (joined_str != NULL) {
        printf("Joined string: %s\n", joined_str);

        free(joined_str);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
*/
