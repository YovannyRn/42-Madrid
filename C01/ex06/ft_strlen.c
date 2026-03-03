/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynunez <ynunez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 18:14:11 by ynunez            #+#    #+#             */
/*   Updated: 2026/02/05 18:41:15 by ynunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

/*int	main()
{
	char str[] = "holaa mundoo";
	int count = ft_strlen(str);
	ft_strlen(str);
	printf("%d\n", count);
	return 0;
}*/
