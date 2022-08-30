/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:25:25 by pmeising          #+#    #+#             */
/*   Updated: 2022/08/29 14:22:55 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while(s[i])
	{
		while(reject[n])
		{
			if(s[i] == reject[n])
				return (i);
			n++;
		}
		i++;
	}
	i = 0;
	while (s[i])
		i++;
	return (i);
}
