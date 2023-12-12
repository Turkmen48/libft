/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhadurm <panterreyiz48@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:28:56 by muhadurm          #+#    #+#             */
/*   Updated: 2023/10/18 15:38:30 by muhadurm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;
	const char	*start;
	const char	*end;
	char		*trim;

	start = s1;
	end = s1 + ft_strlen(s1) - 1;
	while (*start && ft_strchr(set, *start))
		start++;
	while (end > start && ft_strchr(set, *end))
		end--;
	len = end - start + 1;
	trim = (char *)malloc(len + 1);
	if (!trim)
		return (NULL);
	return (ft_strlcpy(trim, start, len + 1), trim[len] = '\0', trim);
}
