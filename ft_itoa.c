/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhadurm <panterreyiz48@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 20:32:26 by muhadurm          #+#    #+#             */
/*   Updated: 2023/10/26 16:54:48 by muhadurm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_step(int n)
{
	size_t			i;
	unsigned int	number;

	i = 0;
	if (n < 0)
		number = -n;
	else
		number = n;
	if (n <= 0)
		i++;
	while (number > 0)
	{
		number = number / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t			i;
	char			*itoa;
	unsigned int	number;

	i = ft_step(n);
	itoa = (char *)malloc((i + 1) * sizeof(char));
	if (!itoa)
		return (NULL);
	if (n < 0)
		number = -n;
	else
		number = n;
	itoa[i] = '\0';
	if (n < 0)
		itoa[0] = '-';
	if (number == 0)
		itoa[0] = '0';
	while (number > 0)
	{
		i--;
		itoa[i] = (number % 10) + '0';
		number = number / 10;
	}
	return (itoa);
}
