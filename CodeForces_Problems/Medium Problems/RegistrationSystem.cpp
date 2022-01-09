#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int t;
   cin>>t;

   map<string, int> mp;
   while(t--){
      string s;
      cin>>s;
      if(mp[s]){
         cout<<(s + to_string(mp[s]))<<endl;
         mp[s]++;
      }else{
         mp[s] = 1;
         cout<<"OK"<<endl;
      }
   }

   return 0;
}