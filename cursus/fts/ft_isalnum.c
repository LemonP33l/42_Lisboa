/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:13:54 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/14 12:06:23 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Check if c is alphanumeric;
Equivalent to (isalpha(c) || isdigit(c));
*/

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
	{
		return (1);
	}
	return (0);
}

/*
int	main() {
	
	printf("Testing ft_isalnum:\n");
    printf("ft_isalnum('A'): %d\n", ft_isalnum('A'));
    printf("ft_isalnum('a'): %d\n", ft_isalnum('a'));
    printf("ft_isalnum('Z'): %d\n", ft_isalnum('Z'));
    printf("ft_isalnum('z'): %d\n", ft_isalnum('z'));
    printf("ft_isalnum('0'): %d\n", ft_isalnum('0'));
    printf("ft_isalnum('9'): %d\n", ft_isalnum('9'));
    printf("ft_isalnum('#'): %d\n", ft_isalnum('#'));
    return 0;
}
*/
