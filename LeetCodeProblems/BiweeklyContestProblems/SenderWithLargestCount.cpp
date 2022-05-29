#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(x) x.begin(), x.end()

typedef long long ll;

bool cmp(pair<string, int>& a, pair<string, int>& b){
        return a.second < b.second;
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   vector<string> messages =  {"How is leetcode for everyone sa a ds s s w","a b b c c d e f a f s","Leetcode is a useful for practice"};
   vector<string> senders =   {"Zob","Max", "Charlie"};
   

   map<string, int> mp;
   int n = messages.size();
   for(int i = 0; i < n; i++){
      mp[senders[i]] += (count(messages[i].begin(), messages[i].end(), ' ') + 1);
   }

   string name = "";
   int val = INT_MIN;
   for(auto it : mp){
      if(it.second > val || (it.first > name && it.second >= val)){
         val = it.second;
         name = it.first;
      }
   }

   // return name;

   return 0;
}
