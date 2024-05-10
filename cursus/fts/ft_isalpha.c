/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 09:45:42 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/10 13:47:08 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Check if c is an alphabetical char;
Equivalent to (isupper(c) || islower(c));
*/

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

/*
int	main() {
	
	printf("Testing ft_isalpha:\n");
    printf("ft_isalpha('A'): %d\n", ft_isalpha('A'));
    printf("ft_isalpha('a'): %d\n", ft_isalpha('a'));
    printf("ft_isalpha('Z'): %d\n", ft_isalpha('Z'));
    printf("ft_isalpha('z'): %d\n", ft_isalpha('z'));
    printf("ft_isalpha('0'): %d\n", ft_isalpha('0'));
    printf("ft_isalpha('9'): %d\n", ft_isalpha('9'));
    printf("ft_isalpha('#'): %d\n", ft_isalpha('#'));
    return 0;
}
*/
