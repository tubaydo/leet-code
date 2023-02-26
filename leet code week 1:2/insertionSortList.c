#include "stdio.h"

struct ListNode {
	  int val;
	  struct ListNode *next;
 };

struct ListNode* insertionSortList(struct ListNode* head){
    struct ListNode* i = head->next;
    struct ListNode* j = head;
    int key = 0;
    int k = 0;

    if(head == NULL)
        return(NULL);
    while(i != NULL)
    {
        key = i->val;
        while(j != i)
        {
          if(j->val > key)
          {
            k = i->val; 
            i->val = j->val;
            j->val = k;
          }
          j = j->next;
        }
        i = i->next;
        j = head;
    }
    return(head);
}