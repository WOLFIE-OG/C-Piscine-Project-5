/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:22:55 by otodd             #+#    #+#             */
/*   Updated: 2023/10/17 14:40:06 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	count;
	int	fact;

	count = 1;
	fact = 1;
	if (nb < 0)
		return (0);
	while (count <= nb)
	{
		fact = fact * count;
		count++;
	}
	return (fact);
}
