#include <stdlib.h>
#include <stddef.h>//for size_t
// #include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int i;

    i = 0;
    while (n > 0)
    {
        if (((const unsigned char *)s1)[i] != ((const unsigned char *)s2)[i])
            return (((const unsigned char *)s1)[i] - ((const unsigned char *)s2)[i]);
        i++;
        n--;   
    }
    return (0);
}

// int main()
// {
//     char a[5] = " sd";
//     char b[5] = " sd";
//     printf("%d\n", ft_memcmp(a, b, 6));
//     printf("%d\n", memcmp(a, b, 6));
//     return (0);
// }