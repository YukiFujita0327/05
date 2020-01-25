/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufujita <yufujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 19:28:54 by yufujita          #+#    #+#             */
/*   Updated: 2020/01/23 00:43:03 by yufujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int n;

	n = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		return (n * ft_recursive_factorial(--nb));
	}
	else
	{
		return (1);
	}
}
