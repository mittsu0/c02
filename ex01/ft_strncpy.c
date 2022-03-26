/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 00:33:59 by unix_user         #+#    #+#             */
/*   Updated: 2022/03/26 23:59:02 by unix_user        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	unsigned int	size;

	i = 0;
	size = ft_strlen(src);
	if (size >= n)
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
		return (dest);
	}
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n && dest[i])
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str1[] = "ABCDEFGH";
// 	char	str2[] = "1234";
// 	char	str3[] = "abcdefghi";
// 	char	str1_cp[] = "ABCDEFGH";
// 	char	str2_cp[] = "1234";
// 	char	str3_cp[] = "abcdefghi";

// 	printf("%s\n", strncpy(str1, str2, 3));
// 	printf("%s\n", ft_strncpy(str1_cp, str2_cp, 3));
// 	printf("%s\n", strncpy(str1, str2, 8));
// 	printf("%s\n", ft_strncpy(str1_cp, str2_cp, 8));
// 	printf("%s\n", strncpy(str2, str3, 10));
// 	printf("%s\n", ft_strncpy(str2_cp, str3_cp, 10));
// 	return (0);
// }
