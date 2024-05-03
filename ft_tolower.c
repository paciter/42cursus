#include "libft.h"

int ft_tolower (int c)
{
    if(c >= 'A' && c <= 'Z')
		return (c = c + 32);
	else 
		return (c);
}
/*
int main() {
    char uppercase = '7';
    char lowercase = ft_tolower(uppercase);
    
    printf("Uppercase: %c\n", uppercase);
    printf("Lowercase: %c\n", lowercase);

    return 0;
}
*/