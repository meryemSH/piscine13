/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 10:55:38 by mserghou          #+#    #+#             */
/*   Updated: 2024/09/07 10:55:41 by mserghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z')
			&& !(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main()
{
	char test1[] = "Meryem";
	char test2[] = "Meryem123";
	char test3[] = "Meryem Sh";
	char test4[] = "";
	char test5[] = " ";

	printf("Test 1: %d\n", ft_str_is_alpha(test1));
	printf("Test 2: %d\n", ft_str_is_alpha(test2));
	printf("Test 3: %d\n", ft_str_is_alpha(test3));
	printf("Test 4: %d\n", ft_str_is_alpha(test4));
	printf("Test 5: %d\n", ft_str_is_alpha(test5));

	return (0);
}*/
