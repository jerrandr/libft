/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrandr <jerrandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 09:09:27 by jerrandr          #+#    #+#             */
/*   Updated: 2024/03/13 08:35:12 by jerrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lenght(int n)
{
	int			len;
	long int	tmp;

	tmp = n;
	len = 0;
	if (n < 0)
	{
		tmp = -tmp;
		len++;
	}
	if (n == 0)
		return (1);
	while (tmp != 0)
	{
		len++;
		tmp = tmp / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long int	tmp;
	char		*str;
	int			i;

	i = ft_lenght(n);
	str = (char *)ft_calloc(i + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	tmp = n;
	if (n < 0)
	{
		tmp = -tmp;
	}
	while (i > 0)
	{
		str[i - 1] = (tmp % 10) + '0';
		tmp = tmp / 10;
		i--;
	}
	if (n < 0)
		str[0] = '-';
	str[ft_lenght(n)] = '\0';
	return (str);
}
// int main()
// {
//     printf("%s",ft_itoa(10));
// }
