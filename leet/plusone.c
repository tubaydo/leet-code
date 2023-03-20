int* plusOne(int* digits, int digitsSize, int* returnSize)
{
    int i = digitsSize - 1;
    int k = 1;
    int *p = malloc((digitsSize) * sizeof(int));
   while(i >= 0)
   {
       if(digits[i] < 9)
       {
           p[i] = digits[i] + 1;
           for(int j = i-1; j >= 0; j--)
               p[j] = digits[j];
           *returnSize = digitsSize;
           return(p);
       }
       else
           p[i] = 0;
        i--;
    }
    int *s = malloc((digitsSize+1) * sizeof(int));
    s[0] = 1;
    while(k <= digitsSize)
    {
        s[k] = 0;
        k++;
    }
    *returnSize = digitsSize+1;
    return(s);
}