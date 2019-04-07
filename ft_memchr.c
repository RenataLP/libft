#include <stdlib.h>
#include <stddef.h>
#include <string.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    int i;

    i = 0;
    while (n > 0)
    {
        if (((const char *)s)[i] == (char)c)
            return ((void *)s);
        i++;
        n--;
    }
    return (NULL);
}

int main()
{
    char a[5] = "sdfs";
    //printf("%s\n", ft_memchr(a, 'f', 2));
    printf("%s\n", memchr(a, 'a', 2));
    return (0);
}