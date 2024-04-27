/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:50:05 by peli              #+#    #+#             */
/*   Updated: 2024/04/27 15:51:07 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char	*ft_strchr(const char *s, int c)
{
	int	i;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return((char *)&s[i]);
		else
			i++;
	}
	if(c == '\0')
	{
		return((char *)&s[i]);
	}
	return (NULL);
}
int	main(int argc, char* argv[])
{
	if (argc < 3)
	{
		return (1);
	}
	printf ("%s", ft_strchr(argv[1], argv[2][0]));
	return (0);
}
