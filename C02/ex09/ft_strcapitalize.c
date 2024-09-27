/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:21:38 by mserghou          #+#    #+#             */
/*   Updated: 2024/09/07 12:21:42 by mserghou         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	flag = 1;
	i = 0;
	str = ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && flag == 1)
		{
			str[i] -= 32;
			flag = 0;
		}
		else if (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A'
				&& str[i] <= 'Z') && !(str[i] >= '0' && str[i] <= '9'))
		{
			flag = 1;
		}
		else
		{
			flag = 0;
		}
		i++;
	}
	return (str);
}

/*int main()
{
	char test1[] = " -sal4ut,
		\ncomment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("Test 1: %s\n", ft_strcapitalize(test1));

	return (0);
}*/
