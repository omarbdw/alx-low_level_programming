int _atoi (char *s)
{
    int i, sign, num;
    i = sign = num = 0;
    while (s[i] != '\0')
    {
        if (s[i] == '-')
            sign++;
        if (s[i] >= '0' && s[i] <= '9')
        {
            num *= 10;
            num += s[i] - '0';
        }
        if (s[i] == ';')
            break;
        i++;
    }
    if (sign % 2 != 0)
        num *= -1;
    return (num);
}
