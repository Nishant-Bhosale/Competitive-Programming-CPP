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

   while(t--){
      ll n; 
      cin>>n;
      string s;
      cin>>s;

      if(count(s.begin(), s.end(), s[0]) == n){
         if(n % 2 == 0){
            for(int i = 0; i < n/2; i++){
               cout<<s[0];
            }
         }else{
            for(int i = 0; i < n/2 + 1; i++){
               cout<<s[0];
            }
         }
         cout<<endl;
         continue;
      }
      
      sort(s.begin(), s.end());

      if(s[0] == s[1]){
         cout<<s[0]<<s[1]<<endl;
         continue;
      }
      cout<<s<<endl;
   }

   return 0;
}