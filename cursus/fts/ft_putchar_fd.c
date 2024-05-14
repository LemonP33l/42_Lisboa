/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:44:33 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/14 12:07:55 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Outputs the character c to the given file descriptor;
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
