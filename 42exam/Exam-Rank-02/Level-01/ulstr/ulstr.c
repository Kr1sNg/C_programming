/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:41:00 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/12/04 14:47:30 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac != 2)
		return (write(1, "\n", 1), -1);

	int	i = 0;
	char c;

	while (av[1][i] != '\0')
	{
		if (av[1][i] >= 'a' && av[1][i] <= 'z')
		{
			c = av[1][i] - ('a' - 'A');
			write(1, &c, 1);
		}
		else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
		{
			c = av[1][i] + ('a' - 'A');
			write(1, &c, 1);
		}
		else
			write(1, &av[1][i], 1);
		i++;
	}
}
