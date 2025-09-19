/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kal-haj- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 01:01:23 by kal-haj-          #+#    #+#             */
/*   Updated: 2025/01/14 01:05:21 by kal-haj-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (i > 1);
}

void	printmod(int nbr, int b_size, char *base)
{
	int	i;

	i = nbr % b_size;
	nbr = nbr / b_size;
	if (nbr > 0)
		printmod (nbr, b_size, base);
	write (1, &base[i], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	b_size;

	b_size = 0;
	while (base[b_size])
		b_size++;
	if (!is_valid(base))
		return ;
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		printmod(-(nbr / b_size), b_size, base);
		write(1, &base[-(nbr % b_size)], 1);
		return ;
	}
	if (nbr < 0)
	{
		write (1, "-", 1);
		nbr = -nbr;
	}
	printmod (nbr, b_size, base);
}

/*
int	main(void)
{
	ft_putnbr_base(-2147483648, "0123456789");
	return (0);
}
*/
