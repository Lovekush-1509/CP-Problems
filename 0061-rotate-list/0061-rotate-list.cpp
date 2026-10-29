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

public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k == 0)return head;
       ListNode* temp = head;
       int len = 0;
       while(temp->next != NULL){
        len++;
        temp = temp->next;
       }
       len++;
        temp->next = head;
       int nodeNum = len - k%len;
       temp = head;
       while(nodeNum > 1){
        nodeNum--;
        temp = temp->next;
       }
        ListNode* newHead = temp->next;
       temp->next = NULL;
       return newHead;

    }
};