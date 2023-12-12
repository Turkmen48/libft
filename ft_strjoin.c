/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhadurm <panterreyiz48@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:56:53 by muhadurm          #+#    #+#             */
/*   Updated: 2023/10/15 15:02:06 by muhadurm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	i;
	size_t	j;

	joined = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!joined)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		joined[j] = s1[i];
		++i;
		++j;
	}
	i = 0;
	while (s2[i])
	{
		joined[j] = s2[i];
		++i;
		++j;
	}
	joined[j] = 0;
	return (joined);
}
