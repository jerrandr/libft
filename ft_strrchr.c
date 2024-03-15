/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrandr <jerrandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 08:40:56 by jerrandr          #+#    #+#             */
/*   Updated: 2024/03/13 08:36:16 by jerrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	tmp = (char *)s;
	i = ft_strlen(tmp);
	while (i >= 0)
	{
		if (tmp[i] == (char)c)
			return (&tmp[i]);
		i--;
	}
	return (0);
}
/*#include<string.h>
#include<stdio.h>
int main()
{
    printf("%s",strrchr("",'a'));
    printf("\n");
    printf("%s",ft_strrchr("",'a'));
}*/
