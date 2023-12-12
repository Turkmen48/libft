/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhadurm <panterreyiz48@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:15:27 by muhadurm          #+#    #+#             */
/*   Updated: 2023/10/18 15:33:12 by muhadurm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*new;

	i = 0;
	new = (const char *)s;
	while (i < n)
	{
		if (new[i] == (char)c)
			return ((void *)&new[i]);
		i++;
	}
	return (NULL);
}
