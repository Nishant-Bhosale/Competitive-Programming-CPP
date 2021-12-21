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
      string s;
      cin>>s;

      if(s.size() % 2 != 0){
         cout<<"NO"<<endl;
         continue;
      }else{
         int idx = s.size()/2;
         string s1 = "";
         for(int i = 0; i < idx; i++){
            s1 += s[i];
         }

         string s2 = "";
         for(int i = idx; i < s.size(); i++){
            s2 += s[i];
         }

         if(s1 == s2){
            cout<<"YES"<<endl;;
         }else{
            cout<<"NO"<<endl;
         }
      }
   }


   return 0;
}