/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:50:55 by peli              #+#    #+#             */
/*   Updated: 2024/05/15 16:27:22 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!little[0])
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		while ((big[i] == little[j]) && i < len)
		{
			j++;
			i++;
			if (little[j] == '\0')
				return (&((char *)big)[i - j]);
			if (big[i] != little[j])
				break ;
		}
		i++;
		j = 0;
	}
	return (NULL);
}

/* int main()
{
	printf("%s\n", ft_strnstr("
	lorem ipsum dolor ipsumm sit amet", "ipsumm", 30));
	return (0);
} */
