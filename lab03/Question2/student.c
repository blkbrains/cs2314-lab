// Question2/student.c
// ------------------------------------------------------------
// CS Lab03 - Swap Nodes in Pairs 
//
// TODO:
//   Implement swapPairs(head) to swap every two adjacent nodes.
//
// Rules:
// - Do not allocate new nodes.
// - Do not swap values; swap nodes (rewire pointers).
// - Return the new head pointer.
// ------------------------------------------------------------
#include "student.h"

struct ListNode* swapPairs(struct ListNode* head) {

 
     // TODO: implement

   if(head == NULL || head->next == NULL){
      return head;
   }
struct ListNode *curr = head;
struct ListNode *newHead= head->next;

while(curr && curr->next){
      struct ListNode *temp=curr;
      curr =temp->next;
      temp-> next =curr->next;
      curr->next =temp;
      curr=temp->next;
      if (curr && curr->next)
      {
            temp->next =curr->next;
      }
}
return newHead;
}