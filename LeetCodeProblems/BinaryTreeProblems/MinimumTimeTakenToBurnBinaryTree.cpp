/************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) 
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

#include<bits/stdc++.h>
BinaryTreeNode<int>* getParents(BinaryTreeNode<int>* root, map<BinaryTreeNode<int>*, BinaryTreeNode<int>*> &parents, int start){
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    BinaryTreeNode<int>* res;
    while(!q.empty()){
        BinaryTreeNode<int>* node = q.front();
        
        q.pop();
        
        if(node->data == start) res = node;
        
        if(node->left){
            parents[node->left] = node;
            q.push(node->left);
        }
        if(node->right){
            parents[node->right] = node;
            q.push(node->right);
        }
    }
    return res;
}

int maxTime(map<BinaryTreeNode<int>*, BinaryTreeNode<int>*> parents, BinaryTreeNode<int>* target){
    queue<BinaryTreeNode<int>*> q;
    map<BinaryTreeNode<int>*, bool> visited;
    q.push(target);
    visited[target] = true;
    int ans = 0;
    while(!q.empty()){
        int sz = q.size();
        bool flag = false;
        for(int i = 0; i < sz; i++){
            BinaryTreeNode<int>* node = q.front();
            q.pop();
            
            if(node->left && !visited[node->left]){
                visited[node->left] = true;
                flag = true;
                q.push(node->left);
            }
             if(node->right && !visited[node->right]){
                visited[node->right] = true;
                flag = true;
                q.push(node->right);
            }
            
            if(parents[node] && !visited[parents[node]]){
                q.push(parents[node]);
                visited[parents[node]] = true;
                flag = true;
            }
        }
        flag ? ans++ : ans;
    }
    
    return ans;
}

int timeToBurnTree(BinaryTreeNode<int>* root, int start)
{
    map<BinaryTreeNode<int>*, BinaryTreeNode<int>*> parents;
    BinaryTreeNode<int>* target = getParents(root, parents, start);
    int time = maxTime(parents, target);
    return time;
}
