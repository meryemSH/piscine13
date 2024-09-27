/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:19:52 by mserghou          #+#    #+#             */
/*   Updated: 2024/09/07 12:20:18 by mserghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

/*int main()
{
	char test1[] = "Meryem";
	char test2[] = "Meryem123";
	char test3[] = "Meryem Sh";
	char test4[] = "";
	char test5[] = " ";

	printf("Test 1: %s\n", ft_strlowcase(test1));
	printf("Test 2: %s\n", ft_strlowcase(test2));
	printf("Test 3: %s\n", ft_strlowcase(test3));
	printf("Test 4: %s\n", ft_strlowcase(test4));
	printf("Test 5: %s\n", ft_strlowcase(test5));

	return (0);
}*/
