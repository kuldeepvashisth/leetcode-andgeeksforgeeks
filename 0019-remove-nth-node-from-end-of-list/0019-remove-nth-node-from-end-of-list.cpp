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
       ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
     ListNode* prev=NULL;
     ListNode* curr=head;
     while(curr->next!=NULL){
        ListNode*next=curr->next;
          curr->next=prev;
          prev=curr;
          curr=next;
     }
     curr->next=prev;
     head=curr;
     return head;
 }
      
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*reverseHead=reverseList(head);
        if(n==1){
            reverseHead=reverseHead->next;
             ListNode*newHead=reverseList(reverseHead);   
       return newHead;
        }
        ListNode*temp=reverseHead;
        int cnt=1;
        while(temp!=nullptr){
          if(cnt==n-1){
               temp->next=temp->next->next;
               break;
          }
          cnt++;
          temp=temp->next;
        }
         ListNode*newHead=reverseList(reverseHead);   
       return newHead;
    }
};