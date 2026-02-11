/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguia-ma <gguia-ma@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 13:22:14 by gguia-ma          #+#    #+#             */
/*   Updated: 2026/02/10 14:51:02 by gguia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_strlenarg(char **argv, int argc)
{
    int i;
    int j;
    int len;

    i = 0;
    len = 0;
    j = 1;
    while (argc >= j)
    {
        while (argv[j][i])
            i++;
        len += i;
        i = 0;
        j++;
    }
    len += (argc - 2);
    return (len);
}
char *ft_strjoin(char **argv, int argc)
{
    char *tmpstr;
    int i;
    int len;
    int j;
    int x;

    tmpstr = NULL;
    i = 1;
    x = 0;
    len = ft_strlenarg(argv, argc);
    tmpstr = malloc(len + 1);
    if (!tmpstr)
        return (NULL);
    while (argc >= i)
    {
        j = 0;
        while (argv[i][j])
            tmpstr[x++] = argv[i][j++];
        i++;
        if (argc > i)
            tmpstr[x++] = ' ';
    }
    tmpstr[x] = '\0';
    return (tmpstr);
}
