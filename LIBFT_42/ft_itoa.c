/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faacar <faacar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:33:11 by faacar            #+#    #+#             */
/*   Updated: 2023/07/09 16:40:37 by faacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	get_len(int num)
{
	int	num_len;

	num_len = 0;
	if (num <= 0)
		num_len++;
	while (num)
	{
		num /= 10;
		num_len++;
	}
	return (num_len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		digit;

	digit = get_len(n);
	str = (char *) ft_calloc(digit + 1, sizeof(char));
	if (!str)
		return (0);
	if (n == 0)
		*str = '0';
	else if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_strlcpy(str, "-2147483648", digit + 1);
			return (str);
		}
		str[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		*(str + --digit) = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
