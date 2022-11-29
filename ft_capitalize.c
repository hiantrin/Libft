/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_capitalize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiantrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 16:18:43 by hiantrin          #+#    #+#             */
/*   Updated: 2019/04/16 16:32:48 by hiantrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_capitalize(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (NULL);
	if (str[i] >= 97 && str[i] <= 122)
	{
		str[i] = str[i] - 32;
		i++;
	}
	while (str[i] != '\0' && str[i] >= 65 && str[i] <= 90)
	{
		str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
