#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll n, k;
   cin>>n>>k;

   string s;
   cin>>s;

   if(s.size() == 1 && k != 0){
      cout<<0<<endl;
   }else{
      if(s[0] != '1' && k != 0){
         s[0] = '1';
         k--;
      }

      for(int i = 1; i < n; i++){
         if(s[i] == '0'){
            continue;
         }else{
            if(k){
               s[i] = '0';
               k--;
            }
         }
      }

      cout<<s<<endl;
   }
   return 0;
}