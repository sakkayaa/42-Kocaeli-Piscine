/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 22:57:36 by sakkaya            #+#    #+#             */
/*   Updated: 2021/11/27 23:00:41 by sakkaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alphbet;

	alphbet = 'a';
	while (alphbet <= 'z')
	{
		write(1, &alphbet, 1);
		alphbet++;
	}
}
