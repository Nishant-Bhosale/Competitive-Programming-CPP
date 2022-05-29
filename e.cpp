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

   vector<string> messages =  {"How is leetcode for everyone","a b b c c d e f a f s","Leetcode is a useful for practice"};
   vector<string> senders =   {"Zob","Max", "Charlie"};
   

   map<string, int> mp;
   int n = messages.size();
   for(int i = 0; i < n; i++){
      cout<<(count(messages[i].begin(), messages[i].end(), ' '))<<endl;
      mp[senders[i]] += (count(messages[i].begin(), messages[i].end(), ' ') + 1);
   }

   vector<pair<string, int>> arr;
   for(auto it : mp){
      cout<<it.first<<" "<<it.second<<endl;
      arr.push_back(make_pair(it.first, it.second));
   }
   
   sort(arr.begin(), arr.end(), cmp);
   for(auto it : mp){
      cout<<it.first<<" "<<it.second<<endl;
   }
   
   cout<<arr[n - 1].first<<endl;
   // return arr[n - 1].first;

   return 0;
}
