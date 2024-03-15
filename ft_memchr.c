/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrandr <jerrandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 09:27:03 by jerrandr          #+#    #+#             */
/*   Updated: 2024/03/13 08:35:24 by jerrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*tmp;

	tmp = (char *)s;
	i = 0;
	while (i < n)
	{
		if (tmp[i] == (char)c)
			return (&tmp[i]);
		i++;
	}
	return (0);
}
/*#include<string.h>
#include<stdio.h>
int main()
{
    printf("%s",(char *)memchr("raoato",'o',3));
    printf("\n");
    printf("%s",(char *)ft_memchr("raoato",'o',3));
}*/
