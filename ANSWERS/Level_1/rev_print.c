/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 19:29:32 by pmeising          #+#    #+#             */
/*   Updated: 2022/08/27 19:32:30 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*string;

	string = argv[1];
	i = 0;
	if (argc == 2)
	{
		while (string[i])
			i++;
		while (i > 0)
		{
			write(1, &string[i - 1], 1);
			i--;
		}
	}
	write(1, "\n", 1);
}
