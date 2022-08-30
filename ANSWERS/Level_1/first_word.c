/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 14:45:33 by pmeising          #+#    #+#             */
/*   Updated: 2022/08/27 15:03:43 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*sentence;
	int		i;

	i = 0;
	sentence = argv[1];
	if (argc == 2)
	{
		while (sentence[i] == ' ' || sentence[i] == '	')
			i++;
		while (sentence[i] != ' ' && sentence[i] != '	' && sentence[i])
		{
			write(1, &sentence[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
