/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrandr <jerrandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 09:44:16 by jerrandr          #+#    #+#             */
/*   Updated: 2024/03/13 08:35:28 by jerrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (tmp1[i] != tmp2[i])
			return (tmp1[i] - tmp2[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
	char	*s1 = argv[1];
	char	*s2 = argv[2];
    printf("%d",memcmp(s1,s2,atoi(argv[3])));
    printf("\n");
    printf("%d",ft_memcmp(s1,s2,atoi(argv[3])));
}*/
