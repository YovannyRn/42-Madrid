/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynunez <ynunez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 18:43:56 by ynunez            #+#    #+#             */
/*   Updated: 2026/02/05 18:34:27 by ynunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	aux;

	count = 0;
	while (count < (size / 2))
	{
		aux = tab[count];
		tab[count] = tab[size - count -1];
		tab[size - count - 1] = aux;
		count++;
	}
}

/*int	main()
{
	int array[] = {1, 2, 3, 4};
	int size;

    size = 8;
	ft_rev_int_tab(array, size);
	printf("%d %d %d %d %d %d %d %d", array[0], array[1], array[2], array[3]);
}*/
