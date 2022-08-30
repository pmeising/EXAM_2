/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:27:55 by pmeising          #+#    #+#             */
/*   Updated: 2022/08/29 17:36:12 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *string)
{
	int	i;
	int	sign;
	int	nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while ((string[i] >= 9 && string[i] <= 13) || string[i] == '	')
		i++;
	if (string[i] == '-')
		sign = -1;
	while (string[i] == '+' || string[i] == '-')
		i++;
	while (string[i] >= '0' && string[i] <= '9')
	{
		nbr = nbr * 10;
		nbr = nbr + (string[i] - 48);
		i++;
	}
	return (nbr * sign);
}

void	ft_put_nbr(int nbr)
{
	char	l;

	if (nbr >= 0 && nbr <= 9)
	{
		l = nbr + 48;
		write(1, &l, 1);
	}
	else
	{
		ft_put_nbr(nbr / 10);
		l = (nbr % 10) + 48;
		write(1, &l, 1);
	}
}

int	main(int argc, char **argv)
{
	int	sum;
	int	nbr;
	int	i;
	int	j;
	int	count;

	if (argc == 2)
	{
		sum = 0;
		i = 0;
		nbr = ft_atoi(argv[1]);
		while (i <= nbr)
		{
			j = 2;
			count = 0;
			while (j < nbr)
			{
				if (i % j == 0)
					count++;
				j++;
			}
			if (count == 0)
				sum = sum + i;
			printf("sum: %d\n", sum);
			i++;
		}
		ft_put_nbr(sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}
