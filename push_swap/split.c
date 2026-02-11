/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguia-ma <gguia-ma@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 13:41:31 by gguia-ma          #+#    #+#             */
/*   Updated: 2026/02/10 14:51:19 by gguia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int count_n(char *str)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (str[i])
    {
        while (str[i] == ' ')
            i++;
        if (str[i] != '\0')
            count++;
        while (str[i] != ' ' && str[i] != '\0')
            i++;
    }
    return (count);
}
char **alloc_array(char *str)
{
    char **array;
    int count;

    count = count_n(str);
    array = malloc((count + 1) * sizeof(char *));
    if (!array)
        return (NULL);
    return (array);
}
char *extract_n(char *str, int start, int end)
{
    int i;
    char *nstr;

    i = 0;
    nstr = malloc((end - start) + 2);
    if (!nstr)
        return (NULL);
    while (i <= (end - start))
        nstr[i++] = str[start++];
    nstr[i] = '\0';
    return (nstr);
}
void free_array(char **array)
{
    int i;

    i = 0;
    while (array[i] && array[i] != NULL)
    {
        free(array[i]);
        i++;
    }
    free(array);
}
char **ft_split(char *str, char c)
{
    char **array;
    int start;
    int i;
    int size;

    i = 0; 
    size = 0;
    array = alloc_array(str);
	if (!array)
		return (NULL);
    while (str[i])
    {
        while (str[i] == c)
            i++;
        start = i;
        while (str[i] != c && str[i] != '\0')
            i++;
        if (str[i - 1] != '\0' && str[i - 1] != c)
			 array[size] = extract_n(str, start, i - 1);
        if (!array[size])
            return(free_array(array), NULL);
		size++;  
    }
    array[size] = NULL;
	return (array);
}