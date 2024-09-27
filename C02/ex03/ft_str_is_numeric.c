/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 10:59:55 by mserghou          #+#    #+#             */
/*   Updated: 2024/09/07 12:05:30 by mserghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}
/*int main()
{
    char test1[] = "12345";
    char test2[] = "1Meryem123";
    char test3[] = "123 556";
    char test4[] = "";
    char test5[] = " ";

    printf("Test 1: %d\n", ft_str_is_numeric(test1));
    printf("Test 2: %d\n", ft_str_is_numeric(test2));
    printf("Test 3: %d\n", ft_str_is_numeric(test3));
    printf("Test 4: %d\n", ft_str_is_numeric(test4));
    printf("Test 5: %d\n", ft_str_is_numeric(test5));

    return 0;
}*/
