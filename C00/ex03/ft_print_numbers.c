/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yovanny <yovanny@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 21:16:21 by yovanny           #+#    #+#             */
/*   Updated: 2026/03/03 23:38:14 by yovanny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c >= '0' && c <= '9')
	{
		write (1, &c, 1);
		c++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
