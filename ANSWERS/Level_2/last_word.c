/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:05:10 by pmeising          #+#    #+#             */
/*   Updated: 2022/08/30 20:48:37 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*string;
	int		i;

	if (argc == 2)
	{
		i = 0;
		string = argv[1];
		while (string[i])
			i++;
		i--;
		while ((string[i] != ' ' || (string[i] >= 9 && string[i] <= 13)) && i >= 0)
			i--;
		i++;
		while (string[i])
		{
			write(1, &string[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
