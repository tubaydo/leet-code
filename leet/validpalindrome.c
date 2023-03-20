#include "stdbool.h"
bool isPalindrome(char * s){
    int k= 0,j = 0,l = 0,len = 0,i = 0;
    bool flag = true;
    char *str;

    for(;s[i] != '\0';i++)
    {
        if(isalnum(s[i]))
            len++;
    }
    str = malloc(sizeof(char) * len + 1);
    for(i = 0;j < len;i++)
    {
        if(isalnum(s[i]))
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {s[i] += 32;}
            str[j]= s[i];
            j++;
        }
    }
    l = len/2;
    str[j] = '\0';
    j--;
    for(i = 0;i < l;i++)
    {
        if(str[j] == str[k])
        {
            j--;
            k++;
        }
        else
            flag = false;
    }
    return(flag);
}