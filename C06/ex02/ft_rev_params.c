/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:36:31 by mserghou          #+#    #+#             */
/*   Updated: 2024/09/14 09:31:47 by mserghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

int	main(int argc, char **argv)
{
	int	i;
	int	cou;

	i = argc - 1;
	if (argc > 0)
	{
		while (i > 0)
		{
			cou = ft_strlen(argv[i]);
			write(1, argv[i], cou);
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
