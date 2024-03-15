/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrandr <jerrandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:53:00 by jerrandr          #+#    #+#             */
/*   Updated: 2024/03/14 11:24:15 by jerrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*tmp0;
	char	*tmp1;

	tmp0 = (char *)dest;
	tmp1 = (char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		tmp0[i] = tmp1[i];
		i++;
	}
	return (dest);
}
// #include <stdio.h>
// #include <bsd/string.h>
// int	main(int	argc,char **argv)
// {
// 	char *dest = argv[1];
// 	char *src = argv[2];
// 	int	 nb = ft_atoi(argv[3]);
// 	printf("%s",(char *)ft_memcpy(dest,src,nb));
// 	printf("\n");
// 	printf("%s",(char *)memcpy(dest,src,nb));
// }
