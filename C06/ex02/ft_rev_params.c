/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kal-haj- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:29:42 by kal-haj-          #+#    #+#             */
/*   Updated: 2025/01/21 18:34:59 by kal-haj-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int	i;

	i = ac - 1;
	while (i >= 1)
	{
		write (1, av[i], ft_strlen(av[i]));
		write (1, "\n", 1);
		i--;
	}
	return (0);
}
