/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrandr <jerrandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:39:50 by jerrandr          #+#    #+#             */
/*   Updated: 2024/03/13 08:55:49 by jerrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && ((j + i + 1) < size))
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen((char *)src));
}
// #include <stdio.h>
// int	main()
// {
// 	char	dst[100] = "ananadgsagdsuiagduisgafuigsifg";
// 	printf("%zu",strlcat(dst,"vvvv",4));
// 	printf("\n");
// 	printf("%s",dst);
// 	printf("\n");
// 	char    dst1[100] = "ananadgsagdsuiagduisgafuigsifg";
// 	printf("%d",ft_strlcat(dst1,"vvvv",4));
// 	printf("\n");
// 	printf("%s",dst);
// }
