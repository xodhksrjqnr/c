/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taewakim <taewakim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 02:04:08 by taewakim          #+#    #+#             */
/*   Updated: 2020/12/27 03:28:44 by taewakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		count;

	if (!dest && !src)
		return (0);
	count = 0;
	while (count < n)
	{
		*((unsigned char *)dest + count) = *((unsigned char *)src + count);
		count++;
	}
	return (dest);
}
