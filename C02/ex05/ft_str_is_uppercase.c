/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:16:54 by mserghou          #+#    #+#             */
/*   Updated: 2024/09/07 12:17:00 by mserghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main()
{
	char test1[] = "MERYEM";
	char test2[] = "Meryem";
	char test3[] = "MERYEM ";
	char test4[] = "";
	char test5[] = " ";
	char test6[] = "Meryem123";

	printf("Test 1: %d\n", ft_str_is_uppercase(test1));
	printf("Test 2: %d\n", ft_str_is_uppercase(test2));
	printf("Test 3: %d\n", ft_str_is_uppercase(test3));
	printf("Test 4: %d\n", ft_str_is_uppercase(test4));
	printf("Test 5: %d\n", ft_str_is_uppercase(test5));
	printf("Test 6: %d\n", ft_str_is_uppercase(test6));

	return (0);
}*/
