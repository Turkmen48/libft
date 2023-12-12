/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhadurm <panterreyiz48@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 21:12:35 by muhadurm          #+#    #+#             */
/*   Updated: 2023/10/26 16:50:58 by muhadurm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*new;

	new = (char *)b;
	i = 0;
	while (i < len)
	{
		new[i] = c;
		++i;
	}
	b = (void *)new;
	return (b);
}
