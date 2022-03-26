/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 00:33:59 by unix_user         #+#    #+#             */
/*   Updated: 2022/03/26 17:17:59 by unix_user        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

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

// int	main(void)
// {
// 	char	str1[7];
// 	char	str2[4];
// 	char	str1_cp[7];
// 	char	str2_cp[4];

// 	printf("%s\n", ft_strncpy(str1, "ABCDEF", 7));
// 	printf("%s\n", strncpy(str1_cp, "ABCDEF", 7));
// 	printf("%s\n", ft_strncpy(str2, "123", 4));
// 	printf("%s\n", strncpy(str2_cp, "123", 4));
// 	printf("%s\n", ft_strncpy(str1, str2, 3));
// 	printf("%s\n", strncpy(str1_cp, str2_cp, 3));
// 	return (0);
// }
