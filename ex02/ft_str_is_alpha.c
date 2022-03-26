/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 00:33:59 by unix_user         #+#    #+#             */
/*   Updated: 2022/03/26 00:47:15 by unix_user        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'z')
		{
			if (str[i] <= 'Z' || str[i] >= 'a')
				i++;
			else
				return (0);
		}
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_str_is_alpha(""));
	printf("%d\n", ft_str_is_alpha("AB"));
	printf("%d\n", ft_str_is_alpha("ab"));
	printf("%d\n", ft_str_is_alpha("Ab"));
	printf("%d\n", ft_str_is_alpha("[`"));
	return (0);
}
