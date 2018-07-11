/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthorell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 13:53:47 by pthorell          #+#    #+#             */
/*   Updated: 2018/07/10 14:24:52 by pthorell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	int		i;
	int		beg;
	int		end;
	char	*p;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		++i;
	beg = i;
	i = ft_strlen(s) - 1;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && i >= 0)
		--i;
	end = i;
	p = ft_strnew(end - beg);
	if (!p)
		return (NULL);
	i = 0;
	while (beg <= end)
		p[i++] = s[beg++];
	p[i] = '\0';
	return (p);
}