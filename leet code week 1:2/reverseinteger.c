#include "stdio.h"

int    ft_isdigit(int c)
{
    return (c >= '0' && c <= '9');
}
int    ft_atoi(const char *str)
{
    long long int    number;
    int                sign;

    number = 0;
    sign = 1;
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '-')
        sign = -1;
    if (*str == '+' || *str == '-')
        str++; 
    while (ft_isdigit(*str))
    {
        number = (number * 10) + (*str - '0') * sign;
        str++;
        if (number > 2147483647)
            return (0);
        if (number < -2147483648)
            return (0);
    }
    return (number);
}

int reverse(int x){
    char s[11];
    int i = 0;
    int j = 0;
    int num = 0;
    int sign = -1;
    int ctrl = 0;
    
    if(x == -2147483648)
        x = 0;
    if(x > 0)
        sign = 1;
    else
      x = -1*x;
    while(x != 0)
    {
      j = x % 10;
      s[i] = j + '0';
      x = x/10;
      i++;
    }
    num = ft_atoi(s);
    return(sign * num);
}