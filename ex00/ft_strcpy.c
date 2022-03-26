/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 00:33:59 by unix_user         #+#    #+#             */
/*   Updated: 2022/03/26 17:17:24 by unix_user        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (i <= ft_strlen(src))
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	str1[7];
// 	char	str2[4];
// 	char	str1_cp[7];
// 	char	str2_cp[4];

// 	printf("%s\n", ft_strcpy(str1, "ABCDEF"));
// 	printf("%s\n", strcpy(str1_cp, "ABCDEF"));
// 	printf("%s\n", ft_strcpy(str2, "123"));
// 	printf("%s\n", strcpy(str2_cp, "123"));
// 	printf("%s\n", ft_strcpy(str1, str2));
// 	printf("%s\n", strcpy(str1_cp, str2_cp));
// 	return (0);
// }
