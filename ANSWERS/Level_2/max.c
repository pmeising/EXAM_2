/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:51:58 by pmeising          #+#    #+#             */
/*   Updated: 2022/08/30 22:51:41 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int		max(int* tab, unsigned int len)
{
	unsigned int	i;
	int				max;

	i = 0;
	max = tab[i];
	if (len == 0)
		return (0);
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

// int	main()
// {
// 	int	array[6];

// 	array[0] = 128;
// 	array[1] = 42;
// 	array[2] = 40;
// 	array[3] = 8;
// 	array[4] = 200;
// 	printf("%d\n", max(array, 5));
// 	return (0);
// }
