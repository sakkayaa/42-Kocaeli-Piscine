/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 23:01:11 by sakkaya            #+#    #+#             */
/*   Updated: 2021/11/27 23:12:10 by sakkaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	reversealphbet;

	reversealphbet = 'z';
	while (reversealphbet >= 'a')
	{
		write(1, &reversealphbet, 1);
		reversealphbet--;
	}
}
