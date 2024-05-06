#include "libft.h"

static size_t    count_words(char const *s, char c)
{
    size_t    words;
    size_t    i;

    words = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
            words++;
        i++;
    }
    return (words);
}

static size_t lenword(const char *s, char c)
{
    size_t    i;
    size_t    j;

    i = 0;
    j = 0;
    while (s[i] == c)
        i++;
    while (s[i] != c && s[i] != '\0')
    {
        j++;
        i++;
    }
    return (j);
}

char **ft_split(char const *s, char c)
{
    char    **ptr;
    size_t        i;
    size_t        j;
    size_t    wordnumber;
    size_t    lenmotact;

    wordnumber = count_words(s,c);
    i = 0;
    j = 0;

    ptr = (char **)malloc(sizeof(char *) * (wordnumber + 1));
    if (!ptr)
        return (NULL);
    while ( i < wordnumber)
    {
        while (s[j] == c)
            j++;
        lenmotact = lenword(s + j, c);
        ptr[i] = (char *)malloc(sizeof(char) * (lenmotact + 1));
        if (!ptr[i])
        {
            // Si une allocation échoue, libérer la mémoire allouée jusqu'à présent
            while (i > 0)
                free(ptr[--i]);
            free(ptr);
            return NULL;
        }
        ft_strlcpy(ptr[i], s + j, lenmotact + 1);
        j += lenmotact;
        i++;
    }
    ptr[i] = NULL;
    return ptr;
}
