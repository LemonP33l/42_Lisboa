/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:46:32 by eduferna          #+#    #+#             */
/*   Updated: 2024/04/17 17:11:32 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main() {
    // Test data
    char str2[] = "foo-bar-men";
	char str[] = "pal-god";

    // Print original string
    printf("Original string: %s\n", str);

    // Test ft_memmove with overlapping regions
    ft_memmove(str , str2, 7);
    printf("After ft_memmove (with overlap): %s\n", str);

    return 0;
}
