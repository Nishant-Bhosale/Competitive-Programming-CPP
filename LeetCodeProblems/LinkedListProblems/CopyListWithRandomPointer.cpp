/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp = head;
        map<Node*, Node*> mp;
        
        mp.insert({NULL, NULL});
        while(temp != NULL){
            Node* copyNode = new Node(temp->val);
            mp[temp] = copyNode;
            temp = temp->next;
        }
        
        Node* temp2 = head;
        while(temp2 != NULL){
            Node* copyNode = mp[temp2];
            copyNode->next = mp[temp2->next];
            copyNode->random = mp[temp2->random];
            temp2 = temp2->next;
        }
        
        return mp[head];
    }
};