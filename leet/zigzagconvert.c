char *convert(char *s, int numRows) {
    int len = strlen(s);
    if (len <= numRows || numRows == 1)
        return(s);
    char *ret = malloc(sizeof(char) * (len + 1));
    int index = 0;
    int i = 0;
    int j = 0;
    int k = 2 * numRows - 2;
    while (i < numRows)
    {
        j = i;
        while(j < len)
        {
            ret[index++] = s[j];
            if (i != 0 && i != numRows - 1 && j + k - 2 * i < len)
                ret[index++] = s[j + k - 2 * i];
            j += k;
        }
        i++;
    }
    ret[index] = '\0';
    return(ret);
}
