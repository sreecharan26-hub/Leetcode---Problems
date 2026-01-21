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
    ListNode* swapPairs(ListNode* head) {
        vector<int> v;
        ListNode* temp= head;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int l = 0;
        int r = 1;
        while(r<v.size()){
            swap(v[l],v[r]);
            l+=2;
            r+=2;
        }
        temp = head;
        int i=0;
        while(temp!=NULL){
            temp->val=v[i++];
            temp=temp->next;
        }
        return head;
    }
};