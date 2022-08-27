/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 22:19:53 by pmeising          #+#    #+#             */
/*   Updated: 2022/08/27 22:23:27 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*string;
	char	l;

	string = argv[1];
	i = 0;
	if (argc == 2)
	{
		while (string[i])
		{
			if (string[i] >= 'A' && string[i] <= 'Z')
				l = string[i] + 32;
			else if (string[i] >= 'a' && string[i] <= 'z')
				l = string[i] - 32;
			else
				l = string[i];
			write(1, &l, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
