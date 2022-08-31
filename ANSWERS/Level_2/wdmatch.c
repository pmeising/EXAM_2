/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:42:20 by pmeising          #+#    #+#             */
/*   Updated: 2022/08/31 13:08:11 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		count;
	char	*str1;
	char	*str2;

	if (argc == 3)
	{
		i = 0;
		j = 0;
		count = 0;
		str1 = argv[1];
		str2 = argv[2];
		while (str1[i] && str2[j])
		{
			while (str2[j] != str1[i] && str2[j])
				j++;
			if (str2[j])
				count++;
			i++;
		}
		if (count == i)
		{
			i = 0;
			while (str1[i])
			{
				write(1, &str1[i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
}
