/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufujita <yufujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 03:02:31 by yufujita          #+#    #+#             */
/*   Updated: 2020/01/25 09:21:34 by yufujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int n;

	n = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		power--;
		return (n * ft_recursive_power(nb, power));
	}
}
