/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhadurm <panterreyiz48@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 00:04:21 by muhadurm          #+#    #+#             */
/*   Updated: 2023/10/25 22:27:54 by muhadurm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**my_free(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
	return (NULL);
}

static size_t	count_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			count++;
		s++;
	}
	return (count);
}

static char	*copy_word(const char *s, char c)
{
	size_t	len;
	char	*word;
	size_t	i;

	len = 0;
	i = -1;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word || !s)
		return (NULL);
	while (++i, i < len)
		word[i] = s[i];
	word[len] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**split;
	size_t	i;

	count = count_words(s, c);
	split = (char **)malloc((count + 1) * sizeof(char *));
	if (!s || !split)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			split[i++] = copy_word(s, c);
			if (!split[i - 1])
				return (my_free(split));
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	split[i] = NULL;
	return (split);
}
