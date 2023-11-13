char *_strstr(char *haystack, char *needle)
{
    int i, j, k;
    for (i = 0; haystack[i] != '\0'; i++)
    {
        for (j = 0, k = i; needle[j] != '\0'; j++, k++)
        {
            if (haystack[k] != needle[j] || haystack[k] == '\0')
                break;
        }
        if (needle[j] == '\0')
            return (&haystack[i]);
    }
    return (0);
}
