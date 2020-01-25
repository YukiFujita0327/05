/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufujita <yufujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 02:29:53 by yufujita          #+#    #+#             */
/*   Updated: 2020/01/23 00:43:21 by yufujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int n;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	n = nb;
	while (--power > 0)
	{
		n *= nb;
	}
	return (n);
}
