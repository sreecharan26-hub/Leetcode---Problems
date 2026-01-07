/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* temp1 = headA;
        int n1 = 0;
        while (temp1 != NULL) {
            n1++;
            temp1 = temp1 -> next;
        }
        ListNode* temp2 = headB;
        int n2 = 0;
        while (temp2 != NULL) {
            n2++;
            temp2 = temp2  -> next;
        }
        temp1 =headA;
        temp2= headB;
        if(n1>n2){
            int a=n1-n2;
            while(a--)
            temp1=temp1->next;
        }
        else{
            int b=n2-n1;
            while(b--)
            temp2=temp2->next;
        }
        while(temp1!= temp2){
            temp1= temp1->next;
            temp2= temp2->next;
        }
        return temp1;
    }
};