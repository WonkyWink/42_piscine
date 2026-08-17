/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thobeck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 20:17:05 by thobeck           #+#    #+#             */
/*   Updated: 2026/07/20 20:49:29 by thobeck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	pa;
	int	pb;

	pa = *a;
	pb = *b;
	*a = pb;
	*b = pa;
}
/*
#include <unistd.h>
#include <stdio.h>
int main(void)
{
	int	a;
	int b;
	int *pa;
	int	*pb;
		
	a = 1 + 48;
	b = 2 + 48;
	pa = &a;
	pb = &b;
	printf("add values %d %d\n", a, b);
	write(1, &a, 1);
	write(1, &b, 1);
	ft_swap(pa, pb);
    write(1, &a, 1);
    write(1, &b, 1);
}*/
