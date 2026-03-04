// Question3/student.c
// ------------------------------------------------------------
// CS Lab03 - Linked List Cycle 
//
// TODO:
//   Implement hasCycle(head) using fast/slow pointers.
//
// Rules:
// - Do not allocate new nodes.
// - Do not modify the list.
// ------------------------------------------------------------

#include "student.h"

bool hasCycle(struct ListNode *head) {
    // TODO: implement
if(head == NULL || head->next == NULL)
return false;

struct ListNode* slow= head;
struct ListNode* fast= head->next;

while(slow!=fast){
    if(fast == NULL || fast->next== NULL)
        return false;
    slow=slow->next;
    fast=fast->next->next;
}
return true;
}