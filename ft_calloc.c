/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrandr <jerrandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 07:52:33 by jerrandr          #+#    #+#             */
/*   Updated: 2024/03/13 08:35:02 by jerrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	nb;
	void	*tmp;

	nb = nmemb * size;
	tmp = malloc(nb);
	if (tmp == NULL)
		return (NULL);
	ft_bzero(tmp, nb);
	return (tmp);
}
/*#include <stdio.h>
int	main(int argc,char **argv)
{
	int	nb = ft_atoi(argv[1]);
	int	nb1 = ft_atoi(argv[2]); 
	printf("%s",(char *)ft_calloc(nb,nb1));
	printf("\n");
	printf("%s",(char *)calloc(nb,nb1));
}*/
