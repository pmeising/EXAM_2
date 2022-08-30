/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:04:48 by pmeising          #+#    #+#             */
/*   Updated: 2022/08/29 11:51:55 by pmeising         ###   ########.fr       */
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
				l = (90) - (string[i] - 65);
			else if (string[i] >= 'a' && string[i] <= 'z')
				l = (122) - (string[i] - 97);
			else
				l = string[i];
			write(1, &l, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
