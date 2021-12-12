/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_binary.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student-1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:15:20 by ahel-mou          #+#    #+#             */
/*   Updated: 2021/12/11 18:24:21 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

char	*to_binary(char ascii)
{
	char	*bin;
	int		i;

	i = 8;
	bin = malloc(8);
    bin[8] = '\0';
    while (--i >= 0)
    {
        bin[i] = ascii % 2 + 48;
        ascii /= 2;
    }
	return (bin);
}