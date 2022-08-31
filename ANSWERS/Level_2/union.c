/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:28:34 by pmeising          #+#    #+#             */
/*   Updated: 2022/08/31 12:40:52 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		m;
	int		exist;
	char	*str1;
	char	*str2;

	if (argc == 3)
	{
		i = 0;
		str1 = argv[1];
		str2 = argv[2];
		while (str1[i])
		{
			exist = 0;
			j = 0;
			while (j < i)
			{
				if (str1[j] == str1[i])
					exist = 1;
				j++;
			}
			if (exist == 0)
				write(1, &str1[i], 1);
			i++;
		}
		i = 0;
		while (str2[i])
		{
			exist = 0;
			j = 0;
			while (str1[j])
			{
				if (str1[j] == str2[i])
					exist = 1;
				j++;
			}
			m = 0;
			while (m < i)
			{
				if (str2[m] == str2[i])
					exist = 1;
				m++;
			}
			if (exist == 0)
				write(1, &str2[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
