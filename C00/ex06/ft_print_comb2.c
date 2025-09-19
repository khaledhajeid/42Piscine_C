/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kal-haj- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 04:18:44 by kal-haj-          #+#    #+#             */
/*   Updated: 2025/01/02 04:35:17 by kal-haj-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a != '9' || b != '8' || c != '9' || d != '9')
		write(1, ", ", 2);
}

void	w(char a, char b, char c, char d)
{
	while (c <= '9')
	{
		while (d <= '9')
		{
			ft_print(a, b, c, d);
			d++;
		}
		d = '0';
		c++;
	}
}

void	ft_print_comb2(void)
{
	char	a[2];
	char	b[2];

	a[0] = '0';
	while (a[0] <= '9')
	{
		a[1] = '0';
		while (a[1] <= '9')
		{
			b[0] = a[0];
			b[1] = a[1] + 1;
			w(a[0], a[1], b[0], b[1]);
			a[1]++;
		}
		a[1] = '0';
		a[0]++;
	}
}
