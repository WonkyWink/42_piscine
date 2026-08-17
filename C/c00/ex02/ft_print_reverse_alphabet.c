/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thobeck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 14:11:39 by thobeck           #+#    #+#             */
/*   Updated: 2026/07/19 11:45:04 by thobeck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	x;

	x = 122;
	while (x >= 97)
	{
		write(1, &x, 1);
		--x;
	}
}
/*
int main(void)
{
    ft_print_reverse_alphabet();
}
*/
