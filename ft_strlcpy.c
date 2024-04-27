/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 10:23:50 by peli              #+#    #+#             */
/*   Updated: 2024/04/26 14:18:09 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
size_t	strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	i = 0;
	if(size ==0)
		return (0);
	while(i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return(i);
}

int	main(int argc, char **argv)
{
	if(argc < 4)
	{
		return(1);
	}
	printf("%zu", strlcpy(argv[1], argv[2], atoi(argv[3])));
	return (0);
}
