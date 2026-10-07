/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    ListNode* tail;
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2,int &carry){
      if( l1 == NULL && l2 == NULL){
           return NULL;
       }
       int sum = 0;
       if(l1 != NULL && l2 == NULL){
           sum = l1->val + carry;
       }else if(l1 == NULL && l2 != NULL){
           sum = l2->val + carry;
       }else{
       sum = l1->val + l2->val+carry;  
       }
       if(sum > 9){
           carry = sum/10;
           sum = sum %10;
       }else{
           carry = 0;
       }
       ListNode* head = new ListNode(sum);
       tail = head;
       if(l1 == NULL){
           head->next = addTwoNumbers(l1,l2->next,carry);
       }else if(l2 == NULL){
           head->next = addTwoNumbers(l1->next,l2,carry);
       }else{
       head->next = addTwoNumbers(l1->next,l2->next,carry);  
       }
       return head;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
       ListNode*head = addTwoNumbers(l1,l2,carry);
       if (carry == 1){
           ListNode* temp = new ListNode(carry);
           tail->next = temp;
       }
       return head;
    }
};