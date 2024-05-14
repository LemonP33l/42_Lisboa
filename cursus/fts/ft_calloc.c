/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 09:41:36 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/14 12:06:22 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
   Allocate mem for an array of nmemb elements of size bytes (using malloc);
   Mem is set to zero (ft_bzero);
   Return pointer to allocated mem or NULL if nmemb or size equal to 0;
   "total_size", total size of the memory block;
   First if: Check to ensure that total_size does not result in overflow;
   "UINT_MAX", max value able to be stored in an unsigned int;
   */

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*point;
	size_t	total_size;

	total_size = nmemb * size;
	if (total_size && size && total_size > (UINT_MAX / size))
		return (NULL);
	point = (void *)malloc(total_size);
	if (!point)
	{
		return (NULL);
	}
	ft_bzero(point, total_size);
	return (point);
}

/*
   int main() {
   size_t nmemb = 5;
   size_t size = sizeof(int);

   int *arr = ft_calloc(nmemb, size);

   if (arr != NULL) {
   printf("Allocated array elements:\n");
   for (size_t i = 0; i < nmemb; i++) {
   printf("%d ", arr[i]);
   }
   printf("\n");

   free(arr);
   } else {
   printf("Memory allocation failed.\n");
   }

   return 0;
   }
   */
