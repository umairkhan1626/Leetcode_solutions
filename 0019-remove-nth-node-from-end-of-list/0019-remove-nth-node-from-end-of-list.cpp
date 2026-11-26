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
        if(head==NULL){
            return NULL;
        }
        vector<int> v;
        ListNode* temp = head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        v.erase(v.end()-n);
        if(v.empty()){
            delete head;
            return NULL;
        }
        temp = head;
        for(int i=0; i<v.size(); i++){
            temp->val = v[i];
            if(i==v.size()-1){
                break;
            }
            temp = temp->next;
        }
        ListNode* del = temp->next;
        temp->next = NULL;
        delete del;

        return head;

    }
};