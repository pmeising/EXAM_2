/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:53:45 by pmeising          #+#    #+#             */
/*   Updated: 2022/08/29 12:41:52 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*string;
	int		i;
	char	l;

	i = 0;
	if (argc == 2)
	{
		string = argv[1];
		while (string[i])
		{
			if (string[i] >= 'A' && string[i] <= 'Z')
			{
				write(1, "_", 1);
				l = string[i] + 32;
				write(1, &l, 1);	
			}
			else
				write(1, &string[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
