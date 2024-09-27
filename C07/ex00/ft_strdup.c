/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:09:41 by mserghou          #+#    #+#             */
/*   Updated: 2024/09/18 13:47:37 by mserghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;
	int		length;

	i = 0;
	length = 0;
	while (src[length] != '\0')
		length++;
	dup = (char *) malloc((length + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*int main ()
{
    char original[] = "Hello, world!";
    char *duplicate;
    duplicate = ft_strdup(original);
    printf("Original string: %s\n", original);
    printf("Duplicated string: %s\n", duplicate);
	return 0;
}*/
