char *strdup(const char *s1)
{
    char *s2;
    int i;

    i = 0;
    s2 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1);
    if (s2 == NULL)//посмотреть так ли
        return (NULL);
    while (s1[i] != '\0')
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';//return (char *)memcpy(s2, s1, ft_strlen(s1) + 1)
    return (s2);
}