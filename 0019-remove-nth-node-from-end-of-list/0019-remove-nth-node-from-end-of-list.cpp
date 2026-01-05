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
        ListNode*prev = NULL;
        ListNode*temp = head;
        while(temp!= NULL){
            ListNode* front= temp->next;
            temp->next = prev;
            prev = temp;
            temp =  front;
        }
        head = prev;
        if(n==1){
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
        else{
            ListNode* temp = head;
            for(int i=1;i<n-1;i++){
                temp= temp->next;
            }
            ListNode* deletenode = temp->next;
            temp->next = temp->next->next;
            delete(deletenode);
        }
        prev = NULL;
        temp = head;
        while(temp!=NULL){
            ListNode* after = temp->next;
            temp->next = prev;
            prev = temp;
            temp = after;
        }
        head = prev;
        return head;
    }
};