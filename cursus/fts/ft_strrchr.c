/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:41:31 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/14 12:09:18 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Check for a char in a string;
Return a pointer to the last occurrence of said char in string;
Return NULL if char's not found.
!!!The position is calculated with pointer arithmetic:
(Subtracting a pointer from another gives the distance);
*/

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (NULL);
}

/*
   int main() {
   const char *str = "Hello, world!";
   char search_char = 'o';
   char *result;

   result = ft_strrchr(str, search_char);

   if (result != NULL) {
   printf("Last occurrence of character '%c' found at position: %ld\n", 
   search_char, result - str);
   } else {
   printf("Character '%c' not found in the string.\n", search_char);
   }

   return 0;
   }
   */
