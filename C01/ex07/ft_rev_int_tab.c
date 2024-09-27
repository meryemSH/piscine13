/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:12:51 by mserghou          #+#    #+#             */
/*   Updated: 2024/09/10 08:54:59 by mserghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	end;

	i = 0;
	end = size - 1;
	while (i < end)
	{
		temp = tab[i];
		tab[i] = tab[end];
		tab[end] = temp;
		i++;
		end--;
	}
}

/*int main(){
	int tab[]= {1,2,3,4,5,6};
	int i = 0;
	ft_rev_int_tab(tab, 6);
	while (i < 6){
        printf("%d", tab[i]);
		i++;
	}

	return 0;
}*/
