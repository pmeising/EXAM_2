/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 19:34:20 by pmeising          #+#    #+#             */
/*   Updated: 2022/08/27 19:42:26 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*string;
	char	l;

	i = 0;
	string = argv[1];
	if (argc == 2)
	{
		while (string[i])
		{
			if ((string[i] >= 'A' && string[i] <= 'M') || (string[i] >= 'a' && string[i] <= 'm'))
				l = string[i] + 13;
			else if ((string[i] >= 'N' && string[i] <= 'Z') || (string[i] >= 'n' && string[i] <= 'z'))
				l = string[i] - 13;
			else
				l = string[i];
			write(1, &l, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
