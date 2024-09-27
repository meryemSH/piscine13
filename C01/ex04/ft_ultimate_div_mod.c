/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:51:18 by mserghou          #+#    #+#             */
/*   Updated: 2024/09/01 16:55:58 by mserghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}

/*int main(){

	int a = 21;
	int b = 10;

	ft_ultimate_div_mod(&a, &b);
	printf("div = %d\n mod = %d\n", a , b);
	return 0;
}*/
