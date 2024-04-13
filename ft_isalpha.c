/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseropia <nseropia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:26:28 by nseropia          #+#    #+#             */
/*   Updated: 2023/01/14 17:06:09 by nseropia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

/*
int	ft_isalpha(int c)
{
	size_t	arg;

	arg = c;
	if ((arg >= 'A' && arg <= 'Z') || (arg >= 'a' && arg <= 'z'))
		return (1);
	return (0);
}
*/