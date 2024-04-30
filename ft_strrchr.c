#include "test.h"
char *ft_strrchr(const char *s, int c)
{
    size_t i;

	i = 0;

    while (s[i])
        i++;
    while (i > 0)
    {
        i--;
        if (s[i] == c)
            return ((char *)&s[i]);
    }
    if (s[i] == c)
        return ((char *)&s[i]);
    return (0);
}
/*
int main() {
    const char *str = "Hellq, world!";
    char *found = ft_strrchr(str, 'o');
    
    if (found != NULL) {
        printf("Le caractère 'o' a été trouvé à la position : %ld\n", found - str);
    } else {
        printf("Le caractère 'o' n'a pas été trouvé dans la chaîne.\n");
    }

    return 0;
}*/