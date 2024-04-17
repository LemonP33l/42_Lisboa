/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:46:32 by eduferna          #+#    #+#             */
/*   Updated: 2024/04/17 18:46:14 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main() {
    // Test data
    char str[] = "Hello, world!";
    char search_char = 'o';
    size_t n = strlen(str);

    // Print original string
    printf("Original string: %s\n", str);

    // Search for the character 'o' in the string using ft_memchr
    void *result = ft_memchr(str, search_char, n);

    // Check if the character was found
    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n", search_char, (char *)result - str);
    } else {
        printf("Character '%c' not found in the string.\n", search_char);
    }

    return 0;
}
