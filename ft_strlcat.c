/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:27:10 by peli              #+#    #+#             */
/*   Updated: 2024/04/26 18:36:30 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	a;
	i = 0;
	a = ft_strlen(dst);
	if (size == 0)
	{
		return 0;
	}
	while (a < size && src[i] != '\0')
	{
		dst[a] = src[i];
		a++;
		i++;
	}
	dst[a] = '\0';
/*	
	printf("%s", dst);
*/
	return (a + 1);
}

int	main(int argc, char **argv)
{
	int	i;
	i = 0;
	if(argc < 4)
	{
		return (0);
	}
	printf("%zu", ft_strlcat(argv[1], argv[2], atoi(argv[3])));
	return (0);
}

