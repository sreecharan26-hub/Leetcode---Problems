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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL or head->next==NULL){
            return NULL;
        }
        int count =0;
        ListNode* temp =head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        if(count == n){
            ListNode*newHead=head->next;
            delete(head);
            return newHead;
        }
        int ans = count - n;
        temp = head;
        while(temp != NULL){
            ans--;
            if(ans == 0) break;
            temp=temp->next;
        }
        ListNode*deletenode = temp->next;
        temp->next=temp->next->next;
        delete(deletenode);

        return head;
    }
};