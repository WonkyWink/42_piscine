/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thobeck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 18:31:10 by thobeck           #+#    #+#             */
/*   Updated: 2026/07/27 18:31:15 by thobeck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int		len;
	int		i;
	char	*op;

	op = str;
	i = 0;
	len = 0;
	while (op[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
/*
int	main(void)
{
	ft_strlen("string");
}
*/
