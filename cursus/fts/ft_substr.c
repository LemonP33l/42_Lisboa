/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:00:55 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/14 12:09:30 by eduferna         ###   ########.fr       */
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
	size_t	total_size;
	char	*str_sub;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	total_size = (ft_strlen(&s[start]));
	if (total_size < len)
		len = total_size;
	i = start;
	j = 0;
	str_sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!str_sub)
		return (NULL);
	while (s[i] != '\0' && j < len)
		str_sub[j++] = s[i++];
	str_sub[j] = 0;
	return (str_sub);
}

/*
int main() {
    const char *str = "Hello, world!";
    unsigned int start = 7;
    size_t len = 5;
    char *substr;

    substr = ft_substr(str, start, len);

    if (substr != NULL) {
        printf("Original string: %s\n", str);
        printf("Substring from index %u with length %zu: %s\n",
		 start, len, substr);

        free(substr);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
*/
