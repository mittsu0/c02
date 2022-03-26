/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 00:33:59 by unix_user         #+#    #+#             */
/*   Updated: 2022/03/26 13:29:45 by unix_user        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;
	int	diff;

	i = 0;
	diff = 'a' - 'A';
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - diff;
		}
		i++;
	}
	return (str);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
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

int	main(void)
{
	char	str1[7];

	ft_strcpy(str1, "aBcD");
	printf("%s\n", str1);
	printf("%s\n", ft_strupcase(str1));
	ft_strcpy(str1, "yz[@A");
	printf("%s\n", str1);
	printf("%s\n", ft_strupcase(str1));
	return (0);
}
