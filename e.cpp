#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(x) x.begin(), x.end()

typedef long long ll;

vector<string> ans;
stack<char> st;

void solve(int open, int close, int n){
        if(open == close && open == n){
            string a = "";
            while(!st.empty()){
               cout<<st.top()<<" ";
                a += st.top();
                st.pop();
            }
            ans.push_back(a);
            return;
        }
        
        if(open < n){
            st.push('(');
            solve(open + 1, close, n);
            cout<<st.top()<<" ";
            st.pop();
        }
        
        if(close < open){
            st.push(')');
            solve(open, close + 1, n);
            st.pop();
        }
}

vector<string> generateParenthesis(int n) {
        solve(0, 0, n);
        return ans;
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int n;
   cin>>n;

   vector<string> res = generateParenthesis(n);
   for(auto it: res){
      cout<<it<<" ";
   }

   return 0;
}