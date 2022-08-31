/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:17:52 by pmeising          #+#    #+#             */
/*   Updated: 2022/08/31 12:27:04 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	l;
	char	*snake;

	if (argc == 2)
	{
		i = 0;
		snake = argv[1];
		while (snake[i])
		{
			if (snake[i] == '_')
			{
				i++;
				l = snake[i] - 32;
			}
			else
				l = snake[i];
			write(1, &l, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
