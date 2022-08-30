/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:02:07 by pmeising          #+#    #+#             */
/*   Updated: 2022/08/29 15:25:59 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char    *ft_strrev(char *str)
{
	char	temp;
	int		i;
	int		len;
	int		index_end;

	i = 0;
	len = 0;
	while(str[len])
		len++;
	index_end = len - 1;
	while(i < (len / 2))
	{
		temp = str[i];
		str[i] = str[index_end];
		str[index_end] = temp;
		i++;
		index_end--;
	}
	return (str);
}

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 		printf("%s\n", ft_strrev(argv[1]));
// 	return (0);
// }
