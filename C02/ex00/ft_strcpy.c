/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:43:52 by sakkaya            #+#    #+#             */
/*   Updated: 2021/12/06 18:33:01 by sakkaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	say;

	say = 0;
	while (src[say] != '\0')
	{
		dest[say] = src[say];
		say++;
	}
	dest[say] = '\0';
	return (dest);
}
