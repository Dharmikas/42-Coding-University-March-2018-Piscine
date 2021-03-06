/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 19:18:38 by dshah             #+#    #+#             */
/*   Updated: 2018/03/17 19:43:33 by dshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int a;

	if (nb <= 1)
		return (2);
	while (1)
	{
		a = 2;
		while ((nb % a != 0))
			a++;
		if (a == nb)
			return (nb);
		else
			nb++;
	}
	return (0);
}
