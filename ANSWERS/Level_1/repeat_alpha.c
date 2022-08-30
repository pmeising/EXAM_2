/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 19:17:15 by pmeising          #+#    #+#             */
/*   Updated: 2022/08/27 19:25:22 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*string;
	int		i;
	int		count;

	i = 0;
	string = argv[1];
	if (argc == 2)
	{
		while (string[i])
		{
			if (string[i] >= 'A' && string[i] <= 'Z')
			{
				count = string[i] - 64;
				while (count > 0)
				{
					write(1, &string[i], 1);
					count--;
				}
			}
			else if (string[i] >= 'a' && string[i] <= 'z')
			{
				count = string[i] - 96;
				while (count > 0)
				{
					write(1, &string[i], 1);
					count--;
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
