/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:19:16 by pmeising          #+#    #+#             */
/*   Updated: 2022/08/29 12:36:37 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		a;
	int		b;
	int		result;
	char	*two;

	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		two = argv[2];
		if (two[0] == '+')
			result = a + b;
		else if (two[0] == '-')
			result = a - b;
		else if (two[0] == '*')
			result = a * b;
		else if (two[0] == '/')
			result = a / b;
		else if (two[0] == '%')
			result = a % b;
		printf("%i", result);
	}
	printf("\n");
}
