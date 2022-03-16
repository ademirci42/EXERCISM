#ifndef ISOGRAM_H
#define ISOGRAM_H

#include <stdbool.h>

char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *phrase);
char    *ft_jump_to_spcandhyp(char *phrase, int chpoint);
char    *ft_remove_space_and_hypens(const char *phrase);
bool is_isogram(const char *phrase);

#endif