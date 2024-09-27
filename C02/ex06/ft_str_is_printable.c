/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:17:57 by mserghou          #+#    #+#             */
/*   Updated: 2024/09/07 15:42:13 by mserghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
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

	printf("Test 1: %d\n", ft_str_is_printable(test1));
	printf("Test 2: %d\n", ft_str_is_printable(test2));
	printf("Test 3: %d\n", ft_str_is_printable(test3));
	printf("Test 4: %d\n", ft_str_is_printable(test4));
	printf("Test 5: %d\n", ft_str_is_printable(test5));

	return (0);
}*/
