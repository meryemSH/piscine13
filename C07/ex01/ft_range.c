/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:51:57 by mserghou          #+#    #+#             */
/*   Updated: 2024/09/18 09:58:22 by mserghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*range;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = (int *) malloc (size * sizeof(int));
	if (range == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*int main ()
{
	int min= 5;
    int max = 10;
	int	i = 0;

    int *range = ft_range(min, max);
	if (range != 0)
	{
		while(i < max - min)
		{
		printf("%d ", range[i]);
		i++;
		}
	}
	else {
		printf("NULL DINNE");
	}
}*/
