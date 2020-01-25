/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufujita <yufujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 03:38:28 by yufujita          #+#    #+#             */
/*   Updated: 2020/01/23 00:44:30 by yufujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int count;

	count = 0;
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index < 0)
		return (-1);
	else
	{
		count++;
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}
