#include "stdbool.h"
int    lstsize(struct ListNode* lst)
{
    int    i;

    i = 0;
    while (lst)
    {
        lst = lst->next;
        i++;
    }
    return (i);
}
bool isPal(int * s,int size){
    int k= 0,j = 0,l = 0,len = 0,i = 0;
    bool flag = true;
    int *str;

    len = size;
    str = malloc(sizeof(int) * len);
    for(i = 0;j < len;i++)
    {
            str[j]= s[i];
            j++;
    }
    l = len/2;
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
bool isPalindrome(struct ListNode* head){
    int k = lstsize(head);
    int *s =malloc(sizeof(int)*(k));
    int i = 0;
    while(head != NULL)
    {
        s[i] = head->val;
        head = head->next;
        i++;
    }
    bool flag = isPal(s,k);
    return(flag);
}