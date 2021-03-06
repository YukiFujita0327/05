/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufujita <yufujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 23:26:49 by yufujita          #+#    #+#             */
/*   Updated: 2020/01/25 10:09:19 by yufujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int n;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (1);
	n = 3;
	while (n * n <= nb && n >= 46339)
	{
		if (nb % n == 0)
			return (1);
		n += 2;
	}
	return (1);
}
