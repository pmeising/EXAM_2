/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:54:11 by pmeising          #+#    #+#             */
/*   Updated: 2022/08/30 17:17:32 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_in_str1(char *str1, int i)
{
	int	j;

	j = 0;
	while (str1[j] && j < i)
	{
		if (str1[j] == str1[i])
			return (1);
		j++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		exist;
	char	*str1;
	char	*str2;

	if (argc == 3)
	{
		i = 0;
		j = 0;
		str1 = argv[1];
		str2 = argv[2];
		while (str1[i] != '\0')
		{
			j = 0;
			exist = 0;
			while (str2[j] != '\0')
			{
				if (str2[j] == str1[i])
					exist = 1;
				j++;
			}
			if (exist == 1 && (ft_is_in_str1(str1, i) == 0))
				write(1, &str1[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
