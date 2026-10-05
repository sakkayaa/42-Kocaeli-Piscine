/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 08:45:15 by sakkaya            #+#    #+#             */
/*   Updated: 2021/12/08 08:48:38 by sakkaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	indx;
	int	indx2;

	indx = 0;
	indx2 = 0;
	while (dest[indx] != '\0')
	{
		indx++;
	}
	while (src[indx2] != '\0')
	{
		dest[indx] = src[indx2];
		indx++;
		indx2++;
	}
	dest[indx] = '\0';
	return (dest);
}
