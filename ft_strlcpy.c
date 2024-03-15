/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrandr <jerrandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 08:23:53 by jerrandr          #+#    #+#             */
/*   Updated: 2024/03/13 08:36:27 by jerrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		n;

	n = 0;
	i = 0;
	if (size == 0)
		return (ft_strlen((char *)src));
	while ((i < size - 1) && (src[i] != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	while (src[n] != '\0')
	{
		n++;
	}
	dst[i] = '\0';
	return (n);
}
/*int	main()
{
	int	nb;
	char	dest[50] = "rakoto";
	nb = ft_strlcpy(dest,"kisoa",0);
	printf("%s",dest);
	printf("%d",nb);
	printf("\n");
	printf("\n");
	char	dest1[50] = "rakoto";
	nb = strlcpy(dest1,"kisoa",0);
	printf("%s",dest1);
	printf("%d",nb);
}*/
