/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thobeck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 18:30:45 by thobeck           #+#    #+#             */
/*   Updated: 2026/07/27 18:30:54 by thobeck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;
	char	*pstr;

	pstr = str;
	i = 0;
	while (pstr[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}
/*
int main(void)
{
	ft_putstr("Iamastring");
}*/
