/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:49:12 by mserghou          #+#    #+#             */
/*   Updated: 2024/09/01 16:50:10 by mserghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main(){
	int a = 21;
	int b = 10;
	int div;
	int mod ;
	ft_div_mod(a,b,&div,&mod);
	printf("a = %d\n b = %d\n div = %d\n mod = %d\n", a, b, div, mod);
	return 0;
}*/
