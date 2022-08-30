/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:44:00 by pmeising          #+#    #+#             */
/*   Updated: 2022/08/29 15:00:59 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	j;

	while (s1)
	{
		j = 0;
		while (s2[j])
		{
			if (s1[0] == s2[j])
				return((char *)s1);
			j++;
		}
		s1++;
	}
	return (NULL);	
}

// int	main(int argc, char **argv)
// {
// 	if (argc == 3)
// 		printf("%s\n", ft_strpbrk(argv[1], argv[2]));
// }
