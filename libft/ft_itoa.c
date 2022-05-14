/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 10:29:41 by obeedril          #+#    #+#             */
/*   Updated: 2021/05/11 20:06:09 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lenin(int n)
{
	int	len_int;

	len_int = 0;
	while (n)
	{
		len_int++;
		n = n / 10;
	}
	return (len_int);
}

static char	*ft_cases(int *n, char *minus)
{
	if (*n == 0)
		return (ft_strdup("0"));
	if (*n == INT_MIN)
		return (ft_strdup("-2147483648"));
	*minus = 0;
	if (*n < 0)
	{
		*minus = 1;
		*n = -*n;
	}
	return (NULL);
}

char	*ft_itoa(int n)
{
	int		len_int;
	char	minus;
	char	*str;

	str = ft_cases(&n, &minus);
	if (str)
		return (str);
	len_int = 0;
	len_int = ft_lenin(n);
	str = (char *)malloc(sizeof(char) * (len_int + minus + 1));
	if (!str)
		return (NULL);
	if (minus)
		str[0] = '-';
	str[len_int + minus] = '\0';
	while (len_int > 0)
	{
		len_int--;
		str[len_int + minus] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}
