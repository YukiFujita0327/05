/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufujita <yufujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 20:21:50 by yufujita          #+#    #+#             */
/*   Updated: 2020/01/23 00:39:52 by yufujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int a;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	a = nb;
	while (--nb > 1)
	{
		a *= nb;
	}
	return (a);
}
