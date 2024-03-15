/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrandr <jerrandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 07:41:35 by jerrandr          #+#    #+#             */
/*   Updated: 2024/03/14 11:24:12 by jerrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>
 #include <string.h>*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	tmp;
	char	*str1;
	char	*str2;

	str1 = (char *)dest;
	str2 = (char *)src;
	tmp = 0;
	if (str1 == str2)
		return (dest);
	if (str2 < str1)
	{
		while (n--)
			str1[n] = str2[n];
		return (dest);
	}
	while (tmp < n)
	{
		str1[tmp] = str2[tmp];
		tmp++;
	}
	return (dest);
}
//  int	main()
//  {
//  	char dest[100] = "abc";
//  	printf("%s",(char *)ft_memmove(dest,"yztz",5));
//  	printf("\n");
//  	char dest1[100] = "abc";
//  	printf("%s",(char *)memmove(dest1,"yztz",5));
//  }
