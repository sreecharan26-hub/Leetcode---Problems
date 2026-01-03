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
    bool hasCycle(ListNode *head) {
        map<ListNode *,int> mpp;
        ListNode *temp = head;
        while(temp != NULL){
            if(mpp.find(temp) != mpp.end()){
                return 1;
            }
            mpp[temp] = 1;
            temp = temp->next;
        }
        return 0;
    }
};