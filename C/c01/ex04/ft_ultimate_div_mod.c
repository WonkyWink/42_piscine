/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thobeck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 21:47:45 by thobeck           #+#    #+#             */
/*   Updated: 2026/07/21 14:31:32 by thobeck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	pa;
	int	pb;

	pa = *a;
	pb = *b;
	*a = pa / pb;
	*b = pa % pb;
}
/*
#include <stdio.h>
int main(void)
{
	int a;
	int b;
	int *pa;
	int *pb;

	a = 10;
	b = 3;
	pa = &a;
	pb = &b;

	printf("A%dB%d\n", a, b);	
	ft_ultimate_div_mod(pa,pb);
    printf("A%dB%d\n", a, b);
}*/
