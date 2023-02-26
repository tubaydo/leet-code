#include "stdio.h"

struct ListNode {
	  int val;
	  struct ListNode *next;
 };
struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2)
{
    struct ListNode *head = NULL;
    struct ListNode *temp = NULL;
    struct ListNode *tail = NULL;
    
    while (list1 != NULL || list2 != NULL)
    {
        if (list1 == NULL)
        {
            temp = list2;
            list2 = list2->next;
        }
        else if (list2 == NULL)
        {
            temp = list1;
            list1 = list1->next;
        }
        else if (list1->val <= list2->val)
        {
            temp = list1;
            list1 = list1->next;
        }
        else
        {
            temp = list2;
            list2 = list2->next;
        }
        
        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
    
    return head;
}
