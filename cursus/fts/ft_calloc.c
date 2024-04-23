/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 09:41:36 by eduferna          #+#    #+#             */
/*   Updated: 2024/04/23 10:44:21 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocate mem for an array of nmemb elements of size bytes (using malloc);
Mem is set to zero (ft_bzero);
Return pointer to allocated mem or NULL if nmemb or size equal to 0;
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*point;

	point = (void *)malloc(nmemb * size);
	if (point == 0)
	{
		return (NULL);
	}
	ft_bzero(point, nmemb);
	return (point);
}
