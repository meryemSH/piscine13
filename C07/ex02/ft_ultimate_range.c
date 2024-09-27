/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:48:08 by mserghou          #+#    #+#             */
/*   Updated: 2024/09/18 16:09:00 by mtarza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(size * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}

/*int	main(void)
{
	int	*range;
	int	size;
	int	min;
	int	max;
	int	i;

	min = 10;
	max = 20;
	size = ft_ultimate_range(&range, min, max);
	if (size == -1)
	{
		printf("Memory allocation failed\n");
	}
	else
	{
		i = 0;
		while (i < size)
		{
			printf("%d ", range[i]);
			i++;
		}
		free(range);
		printf("\n");
	}
	return (0);
}
*/
