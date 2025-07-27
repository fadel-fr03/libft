/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fal-frou <fal-frou@students.42beirut.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 16:55:10 by fal-frou          #+#    #+#             */
/*   Updated: 2024/06/24 14:36:46 by fal-frou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	stat_bzero(void *s, size_t n)
{
	while (n--)
		*(unsigned char *)s++ = 0;
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*allocate;

	if (size != 0 && count > UINT_MAX / size)
		return (NULL);
	allocate = malloc(count * size);
	if (!allocate)
		return (NULL);
	stat_bzero(allocate, count * size);
	return (allocate);
}
