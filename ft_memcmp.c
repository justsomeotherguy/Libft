/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:39:47 by jwilliam          #+#    #+#             */
/*   Updated: 2021/09/27 11:59:19 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t len)
{
	const unsigned char		*temp1;
	const unsigned char		*temp2;
	size_t					index;

	temp1 = (const unsigned char *)str1;
	temp2 = (const unsigned char *)str2;
	index = 0;
	while (index < len)
	{
		if (temp1[index] != temp2[index])
			return (temp1[index] - temp2[index]);
		index++;
	}
	return (0);
}
