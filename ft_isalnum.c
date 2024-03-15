/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrandr <jerrandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:35:38 by jerrandr          #+#    #+#             */
/*   Updated: 2024/03/13 08:35:04 by jerrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int arg)
{
	if ((ft_isalpha(arg)) || ft_isdigit(arg))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d",ft_isalnum(45));
}*/
