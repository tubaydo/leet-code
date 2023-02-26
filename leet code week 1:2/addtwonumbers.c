#include "stdio.h"

struct ListNode {
	  int val;
	  struct ListNode *next;
 };

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2) {
    struct ListNode new;
    struct ListNode *p = &new;
    int elde = 0;

    while (l1 || l2 || elde) {
        int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + elde;
        elde = sum / 10;
        p->next = malloc(sizeof(struct ListNode));
        p = p->next;
        p->val = sum % 10;
        p->next = NULL;
        l1 = l1 ? l1->next : l1;
        l2 = l2 ? l2->next : l2;
    }
    return (new.next);
}
