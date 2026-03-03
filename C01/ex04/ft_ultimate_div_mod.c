/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynunez <ynunez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 20:28:20 by ynunez            #+#    #+#             */
/*   Updated: 2026/02/05 18:42:46 by ynunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp_div;
	int	tmp_mod;

	tmp_div = *a;
	tmp_mod = *b;
	*a = tmp_div / tmp_mod;
	*b = tmp_div % tmp_mod;
}

/*int	main(void)
{
	int	div;
	int	mod;

	div = 18;
	mod = 7;
	ft_ultimate_div_mod(&div, &mod);
}*/
