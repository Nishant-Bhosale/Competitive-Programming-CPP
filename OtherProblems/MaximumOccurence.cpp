#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define abc 1010

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   string s;
   getline(cin, s);

   map<char,int> mp;
   for(int i = 0; i < s.size(); i++){
      mp[s[i]]++;
   }
   int freq = 0;
   char ch;
   for(auto it : mp){
      if(it.second > freq){
         freq = it.second;  
         ch = it.first;
      }else if(it.second == freq && it.first < ch){
         ch = it.first;
      }
   }

   cout<<ch<<" "<<freq<<endl;

   return 0;
}