#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "isogram.h"

char	*ft_strchr(const char *str, int c)
{
	char	*s;
	s = (char *)str;
	while (*s != c && *s != c + 32 && *s != c - 32)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return (s);
}
char	*ft_strdup(const char *str)
{
	char	*dup;
	int		i;
	int		lenght;
	lenght = strlen(str);
	i = 0;
	dup = malloc(sizeof(char) * lenght + 1);
	if (!dup)
		return (0);
	while (i < lenght)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
char    *ft_jump_to_spcandhyp(char *phrase, int chpoint)
{
    int    i;
    int    j;
    char    *new_phrase;
    i = 0;
    j = 0;
    new_phrase = malloc(sizeof(char) * strlen(phrase));
    while(phrase[i])
    {
        if (i == chpoint)
            i++;
        new_phrase[j++] = phrase[i++];
    }
    new_phrase[j] = '\0';
    return(new_phrase);
    
    
}
char    *ft_remove_space_and_hypens(const char *phrase)
{
    int    i;
    char    *new_phrase;
    
    i = 0;
    new_phrase = ft_strdup(phrase);
    while(new_phrase[i])
    {
        if (new_phrase[i] == ' ' || new_phrase[i] == '-')
        {
            new_phrase = ft_jump_to_spcandhyp(new_phrase, i);
            i--;
        }
        i++;
    }
    return(new_phrase);
}
bool is_isogram(const char *phrase)
{
    char    *new_phrase;
    int    i;
    i = 0;
    if(!phrase || phrase[i] == 0)
    {
        if (!phrase)
            return(0);
        if (phrase[i] == 0)
            return(1);
        
    }
    new_phrase = ft_remove_space_and_hypens(phrase);
    while(new_phrase[i])
    {
        if(ft_strchr(&new_phrase[i + 1], new_phrase[i]))
            return(0);
        i++;
    }
    return(1);
}