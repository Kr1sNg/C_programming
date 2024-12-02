/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:01:16 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/12/02 18:24:41 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



char	*ft_strcpy(char *s1, char *s2)
{
	int	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

