/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhadurm <panterreyiz48@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:33:09 by muhadurm          #+#    #+#             */
/*   Updated: 2023/10/21 14:49:22 by muhadurm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*substr;

	if (!s || start >= ft_strlen(s) || len == 0)
	{
		substr = (char *)malloc(1 * sizeof(char));
		if (!substr)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	size = len;
	substr = (char *)malloc((size + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	i = -1;
	while (++i, i < size)
		substr[i] = s[start + i];
	substr[i] = '\0';
	return (substr);
}
