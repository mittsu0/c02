/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 00:33:59 by unix_user         #+#    #+#             */
/*   Updated: 2022/03/27 00:34:05 by unix_user        ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (src_len >= size)
	{
		while (i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[size - 1] = '\0';
	}
	else
	{
		while (i < src_len)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (src_len);
}

// #include <bsd/string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char			str1[] = "ABCDEF";
// 	unsigned int	j;
// 	long			i;
// 	unsigned int	n;

// 	n = 5;
// 	i = strlcpy(str1, "12345", n);
// 	printf("n=%d str=%s return=%ld\n", n, str1, i);
// 	j = ft_strlcpy(str1, "12345", n);
// 	printf("n=%d str=%s return=%d\n", n, str1, j);
// 	n = 6;
// 	i = strlcpy(str1, "12345", n);
// 	printf("n=%d str=%s return=%ld\n", n, str1, i);
// 	j = ft_strlcpy(str1, "12345", n);
// 	printf("n=%d str=%s return=%d\n", n, str1, j);
// 	n = 10;
// 	i = strlcpy(str1, "12345", n);
// 	printf("n=%d str=%s return=%ld\n", n, str1, i);
// 	j = ft_strlcpy(str1, "12345", n);
// 	printf("n=%d str=%s return=%d\n", n, str1, j);
// }
