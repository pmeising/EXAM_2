/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:24:04 by pmeising          #+#    #+#             */
/*   Updated: 2022/08/29 14:28:48 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*new;

	if (src)
	{
		i = 0;
		len = 0;
		while (src[i])
			len++;
		new = malloc(len + 1);
		while (src[i])
		{
			new[i] = src[i];
			i++;
		}
		new[i] = '\0';
		return (new);
	}
	return (NULL);
}
