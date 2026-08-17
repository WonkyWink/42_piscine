/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thobeck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 14:34:34 by thobeck           #+#    #+#             */
/*   Updated: 2026/07/30 15:59:15 by thobeck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	minus_count;

	minus_count = 0;
	while (*str)
	{
		if (*str > 48 && *str < 59)
		{
			printf("%c ", *str);
			str++;
		}
		else if (*str == 45) 
		{
			minus_count++;
			printf("%c ",*str);
			printf("%i ", minus_count);
			str++;
		}
		else
		{
			str++;
		}
		
	}
	return (*str);
}
		{
			minus_count++;
			printf("%c ",*str);
			printf("%i ", minus_count);
			str++;
		}
		else

int main(void)
{
	char	*str;

	str =  " ---+--+1234ab56789";
	printf("%i", ft_atoi(str));

}
