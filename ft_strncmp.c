/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrandr <jerrandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 08:58:17 by jerrandr          #+#    #+#             */
/*   Updated: 2024/03/13 08:36:23 by jerrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*y;
	unsigned char	*x;

	i = 0;
	y = (unsigned char *)s1;
	x = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((y[i] == x[i]) && (i < n - 1) && ((y[i] != '\0')
			&& (x[i] != '\0')))
		i++;
	return (y[i] - x[i]);
}
// #include <stdio.h>
// #include <string.h>
// int	main(int argc, char **argv)
// {
// 	char *s1 = argv[1];
// 	char *s2 = argv[2];
// 	printf("%d",strncmp(s1,s2,2));
// 	printf("\n");
// 	printf("%d",ft_strncmp(s1,s2,2));
// }
