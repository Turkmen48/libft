/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhadurm <panterreyiz48@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:46:50 by muhadurm          #+#    #+#             */
/*   Updated: 2023/10/26 14:18:45 by muhadurm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dst1;
	const char	*src1;

	i = 0;
	dst1 = (char *)dst;
	src1 = (const char *)src;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		dst1[i] = src1[i];
		i++;
	}
	return ((void *)dst1);
}
