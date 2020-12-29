/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taewakim <taewakim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 05:23:06 by taewakim          #+#    #+#             */
/*   Updated: 2020/12/29 10:17:40 by taewakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len1;
	size_t		len2;
	char		*result;
	char		*tmp;

	if (!s1 || !s2)
		return (0);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!(result = (char *)ft_calloc(len1 + len2 + 1, sizeof(char))))
		return (0);
	tmp = result;
	ft_memcpy(tmp, s1, len1);
	ft_memcpy(&tmp[len1], s2, len2);
	return (result);
}
