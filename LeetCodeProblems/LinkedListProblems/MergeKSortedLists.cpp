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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> res;
        for(int i = 0; i < lists.size(); i++){
            ListNode* temp = lists[i];
            while(temp){
                res.push_back(temp->val);
                temp = temp->next;
            }
        }
        sort(res.begin(), res.end());
        
        ListNode ans;
        ListNode *a = &ans;
        for(int i = 0; i < res.size(); i++){
            ListNode* temp = new ListNode(res[i]);
            a->next = temp;
            a = a->next;
        }
        
        return ans.next;
    }
};