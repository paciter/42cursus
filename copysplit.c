#include "string.h"
#include "stdio.h"
#include "stdlib.h"
#include "stddef.h"

size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t src_len;

    i = 0;
    if (!dst || !src)
        return (0);
    src_len = strlen(src);
    if (!dstsize)
        return (src_len);
    while (src[i] != '\0' && i < dstsize - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (src_len);
}

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


int main(void)
{
    char const *str = "Bonjour fonc tion ftsplit";
    char **result = ft_split(str, ' ');

    if (result)
    {
        // Affichage des mots séparés
        for (int i = 0; result[i] != NULL; i++)
        {
            printf("%s\n", result[i]);
            free(result[i]); // Libérer la mémoire allouée pour chaque mot
        }
        free(result); // Libérer la mémoire allouée pour le tableau de pointeurs
    }
    else
    {
        printf("Erreur: Échec de l'allocation mémoire.\n");
    }

    return 0;
}
