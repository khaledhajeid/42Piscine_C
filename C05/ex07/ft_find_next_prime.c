/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kal-haj- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 21:44:51 by kal-haj-          #+#    #+#             */
/*   Updated: 2025/01/19 22:44:58 by kal-haj-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	m;
	int	counter;

	counter = 2;
	if (nb < 0)
		return (0);
	if (nb % 2 == 1)
		m = (nb / 2) + 1;
	else
		m = nb / 2;
	while (counter <= m)
	{
		if (nb % counter == 0)
			return (0);
		counter++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	f;

	f = 1;
	while (f)
	{
		if (ft_is_prime(nb))
		{
			f = 0;
			return (nb);
		}
		nb++;
	}
	return (0);
}
