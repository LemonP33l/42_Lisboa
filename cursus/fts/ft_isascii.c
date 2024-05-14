/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:24:23 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/14 12:06:30 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Check if c fits into ASCII char set;
*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

/*
int	main() {
	
	printf("Testing ft_isascii:\n");
    printf("ft_isascii('A'): %d\n", ft_isascii('A'));
    printf("ft_isascii('a'): %d\n", ft_isascii('a'));
    printf("ft_isascii('Z'): %d\n", ft_isascii('Z'));
    printf("ft_isascii('z'): %d\n", ft_isascii('z'));
    printf("ft_isascii('0'): %d\n", ft_isascii('0'));
    printf("ft_isascii('9'): %d\n", ft_isascii('9'));
    printf("ft_isascii('#'): %d\n", ft_isascii('#'));
    return 0;
}
*/
