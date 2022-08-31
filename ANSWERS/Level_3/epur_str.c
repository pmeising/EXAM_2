/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:21:40 by pmeising          #+#    #+#             */
/*   Updated: 2022/08/31 13:37:11 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		start;
	char	*string;

	if (argc == 2)
	{
		i = 0;
		start = 1;
		string = argv[1];
		while (string[i])
		{
			while (string[i] == ' ' || (string[i] >= 9 && string[i] <= 13))
				i++;
			if (start != 1)
				if (i > 0 && (string[i - 1] == ' ' || (string[i - 1] >= 9 && string[i - 1] <= 13)))
					write(1, " ", 1);
			write(1, &string[i], 1);
			start = 0;
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
