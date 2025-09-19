/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kal-haj- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 22:08:31 by kal-haj-          #+#    #+#             */
/*   Updated: 2025/01/07 23:05:18 by kal-haj-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex[3];

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write (1, &str[i], 1);
		}
		else
		{
			hex[0] = '\\';
			hex[1] = "0123456789abcdef"[(unsigned char)str[i] / 16];
			hex[2] = "0123456789abcdef"[(unsigned char)str[i] % 16];
			write(1, hex, 3);
		}
		i++;
	}
}
