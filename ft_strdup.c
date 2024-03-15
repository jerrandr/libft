/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrandr <jerrandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 08:39:55 by jerrandr          #+#    #+#             */
/*   Updated: 2024/03/13 08:36:29 by jerrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*tmp;
	int		n;

	n = 0;
	i = ft_strlen((char *)s);
	tmp = malloc((sizeof(char)) * (i + 1));
	if (tmp == NULL)
		return (NULL);
	while (n < i)
	{
		tmp[n] = s[n];
		n++;
	}
	tmp[n] = '\0';
	return (tmp);
}
/*#include <stdio.h>
int	main(int	argc, char **argv)
{
	char	*str = argv[1];
	char *str1 = ft_strdup(str);
	printf("ft = %s\n",str1);
	str1 = strdup(str);
	//printf("\n");
	printf("strdup = %s",str1);
}*/
