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
    //  ListNode*reversek(ListNode*&head,ListNode*&curr,int &k){
         
    //      curr=head;
    //      ListNode* dummy=new ListNode(-1);
    //      dummy->next=head;
    //      ListNode* prev=dummy;
    //    ListNode*currnext=nullptr;

    //      while(k && curr!=nullptr){
    //         currnext=curr->next;
    //         curr->next=prev;
    //         prev=curr;
    //         curr=currnext;
    //         k--;
    //      }
      
    //    dummy->next->next=curr;

    //      delete(dummy);
    //      return prev;
    // }
     

    ListNode* reverseKGroup(ListNode* head, int k) {
           if(head==nullptr) return nullptr;
           int origk=k;
           ListNode*temp=head;
           int cnt=0;
           while(temp!=nullptr){
            temp=temp->next;
            cnt++;
           }
           if(cnt<k) return head;
         ListNode*curr=head;
        // ListNode* dummy=new ListNode(-1);
        //  dummy->next=head;
         ListNode* prev=NULL;
       ListNode*currnext=nullptr;

         while(k && curr!=nullptr){
            currnext=curr->next;
            curr->next=prev;
            prev=curr;
            curr=currnext;
            k--;
         }
      
      head->next=reverseKGroup(curr, origk);
        

        return prev;
         
    }
};