/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:46:32 by eduferna          #+#    #+#             */
/*   Updated: 2024/04/10 14:55:01 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main() {
    char dst[20] = "Hello, ";
    const char *src = "world!";
    
    printf("Original destination string: \"%s\"\n", dst);
    printf("Source string: \"%s\"\n", src);

    size_t result = ft_strlcat(dst, src, sizeof(dst));

    printf("Concatenated string: \"%s\"\n", dst);
    printf("Result of ft_strlcat: %zu\n", result);

    return 0;
}
