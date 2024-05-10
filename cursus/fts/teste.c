/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:46:32 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/10 18:21:48 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main() {
    char dest[20];
    const char src[] = "Hello, world!";
    
    size_t copied = ft_strlcpy(dest, src, sizeof(dest));
    
    printf("Copied string: %s\n", dest);
    printf("Number of characters copied: %zu\n", copied);
    
    return 0;
}
