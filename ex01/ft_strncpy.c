/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 00:33:59 by unix_user         #+#    #+#             */
/*   Updated: 2022/03/26 16:42:05 by unix_user        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (ft_strlen(src) >= n)
	{
		while (i <= n - 1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else
	{
		while (i <= ft_strlen(src))
		{
			dest[i] = src[i];
			i++;
		}
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}

int	main(void)
{
	char	str1[7];
	char	str2[4];

	ft_strncpy(str1, "ABCDEF", 7);
	ft_strncpy(str2, "123", 4);
	ft_strncpy(str1, str2, 3);
	printf("%s\n", str1);
	ft_strncpy(str1, "ABCDEF", 7);
	ft_strncpy(str2, "123", 4);
	ft_strncpy(str1, str2, 7);
	printf("%s\n", str1);
	return (0);
}
