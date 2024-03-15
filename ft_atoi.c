/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrandr <jerrandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:26:01 by jerrandr          #+#    #+#             */
/*   Updated: 2024/03/13 08:34:57 by jerrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	int		nbr;
	char	*tmp;

	tmp = (char *)nptr;
	nbr = 0;
	sign = 0;
	i = 0;
	while ((tmp[i] >= 9 && tmp[i] <= 13) || (tmp[i] == 32))
		i++;
	if ((tmp[i] == '+') || (tmp[i] == '-'))
	{
		if (tmp[i] == '-')
			sign = 1;
		i++;
	}
	while (tmp[i] >= '0' && tmp[i] <= '9')
	{
		nbr = (nbr * 10) + (tmp[i] - '0');
		i++;
	}
	if (sign == 1)
		return (-nbr);
	return (nbr);
}
// #include <stdio.h>
// #include <stdlib.h>
// int	main()
// {
// 	printf("%d",atoi("  -+45ivr456ioavior"));
// 	printf("\n");
// 	printf("%d",ft_atoi("  -+45ch777poy9w"));
// }
