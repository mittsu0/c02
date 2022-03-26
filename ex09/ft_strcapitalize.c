/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 00:33:59 by unix_user         #+#    #+#             */
/*   Updated: 2022/03/26 15:01:24 by unix_user        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_isnot_alpha_or_numeric(char *c)
{
	if (*c >= 'A' && *c <= 'z')
	{
		if (*c <= 'Z' || *c >= 'a')
			return (0);
	}
	else if (*c >= '0' && *c <= '9')
		return (0);
	return (1);
}

void	ft_strupcase(char *c)
{
	int	diff;

	diff = 'a' - 'A';
	if (*c >= 'a' && *c <= 'z')
		*c = *c - diff;
}

void	ft_strlowcase(char *c)
{
	int	diff;

	diff = 'a' - 'A';
	if (*c >= 'A' && *c <= 'Z')
		*c = *c + diff;
}

char	*ft_strcapitalize(char *str)
{
	int	flag;
	int	i;

	flag = 1;
	i = 0;
	while (str[i])
	{
		if (ft_str_isnot_alpha_or_numeric(&str[i]))
			flag = 1;
		else
		{
			if (flag)
				ft_strupcase(&str[i]);
			else
				ft_strlowcase(&str[i]);
			flag = 0;
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
	char	str1[47];

	ft_strcpy(str1, "salut, comment tu vas ? 42mots quarante-deux; ");
	printf("%s\n", str1);
	printf("%s\n", ft_strcapitalize(str1));
	return (0);
}
