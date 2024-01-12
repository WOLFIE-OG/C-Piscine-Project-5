/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:38:40 by otodd             #+#    #+#             */
/*   Updated: 2023/10/19 13:44:19 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	index;
	int	value;

	index = 1;
	value = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (index < power)
	{
		value *= nb;
		index++;
	}
	return (value);
}
