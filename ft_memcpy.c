/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:43:16 by peli              #+#    #+#             */
/*   Updated: 2024/04/26 09:57:39 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	i = 0;
	unsigned char *d = (unsigned char *)dest;
	const unsigned char *s = (const unsigned char *)src;

	while(i < n)
	{
		d[i] = s[i];
		i++;
	}
	return(dest);
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf(%d, ft_memcpy(argv[1], argv[2], argc[3]));
	}
	return (0);
}
