#include "stdbool.h"
bool isPalindrome(int x)
{
    unsigned int i = 0;
    int tmp = x;
    if(x < 0)
	    return(false);
    while(x)
    {
        i = i * 10 + x % 10;
        x /= 10;
	}
    if(tmp == i)
        return (true);
    return(false);
}