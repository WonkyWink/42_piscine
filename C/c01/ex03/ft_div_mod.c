/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thobeck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 21:13:15 by thobeck           #+#    #+#             */
/*   Updated: 2026/07/20 21:38:30 by thobeck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	pa;
	int	pb;

	pa = a;
	pb = b;
	*div = pa / pb;
	*mod = pa % pb;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	int	vdiv;
	int	vmod;
	int	*mod;
	int	*div;

	a = 5;
	b = 2;
	div = &vdiv;
	mod = &vmod;
	ft_div_mod(a, b, div, mod);
	printf("A %d B %d Division %d Modulator %d\n", a, b, vdiv, vmod);
}*/
