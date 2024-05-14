/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:06:41 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/14 12:09:08 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
   Compare 2 strings (s1 and s2), up to n bytes;
   Returns an int less than, equal to, or greater than 0
   (respectively: s1 <, >, = s2);
   Using unsigned chars to avoid chars having negative values;
   */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && (s1[i] != '\0' && s2[i] != '\0') && (s1[i] == s2[i]))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
   int main() {
   const char *str1 = "Hello, world!";
   const char *str2 = "Hello, world!";
   size_t n = 7;

   int result = ft_strncmp(str1, str2, n);

   if (result == 0) {
   printf("The first %zu characters of the strings are equal.\n", n);
   } else if (result < 0) {
   printf("The first %zu characters of the first string are less than
   the corresponding characters of the second string.\n", n);
   } else {
   printf("The first %zu characters of the first string are greater
   than the corresponding characters of the second string.\n", n);
   }

   return 0;
   }
   */
