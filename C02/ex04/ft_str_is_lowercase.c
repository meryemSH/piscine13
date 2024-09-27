/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:07:37 by mserghou          #+#    #+#             */
/*   Updated: 2024/09/07 12:08:32 by mserghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*int main()
{
	char test1[] = "meryem";
	char test2[] = "Meryem";
	char test3[] = "meryem ";
	char test4[] = "";
	char test5[] = " ";
	char test6[] = "meryem12";

	printf("Test 1: %d\n", ft_str_is_lowercase(test1));
	printf("Test 2: %d\n", ft_str_is_lowercase(test2));
	printf("Test 3: %d\n", ft_str_is_lowercase(test3));
	printf("Test 4: %d\n", ft_str_is_lowercase(test4));
	printf("Test 5: %d\n", ft_str_is_lowercase(test5));
	printf("Test 6: %d\n", ft_str_is_lowercase(test6));

	return (0);
}*/
