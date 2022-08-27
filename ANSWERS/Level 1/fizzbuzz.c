/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:10:14 by pmeising          #+#    #+#             */
/*   Updated: 2022/08/27 19:01:54 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int i)
{
	int		j;
	char	l;

	if (i > 9)
	{
		j = i / 10;
		l = j + 48;
		write(1, &l, 1);
		j = i % 10;
		l = j + 48;
		write(1, &l, 1);
	}
	else
	{
		l = i + 48;
		write(1, &l, 1);
	}
}

int	main()
{
	int		i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			write(1, "fizzbuzz", 8);
		else if ((i % 3) == 0)
			write(1, "fizz", 4);
		else if ((i % 5) == 0)
			write(1, "buzz", 4);
		else
			ft_write(i);
		write(1, "\n", 1);
		i++;
	}
}
