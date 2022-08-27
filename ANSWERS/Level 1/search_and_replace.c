/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 19:51:14 by pmeising          #+#    #+#             */
/*   Updated: 2022/08/27 19:56:48 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	letter;
	char	replace;
	char	*string;
	char	l;

	i = 0;
	string = argv[1];
	letter = argv[2][0];
	replace = argv[3][0];
	if (argc == 4)
	{
		while (string[i])
		{
			if (string[i] == letter)
				l = replace;
			else
				l = string[i];
			write(1, &l, 1);
			i++;
		}	
	}
	write(1, "\n", 1);
}
