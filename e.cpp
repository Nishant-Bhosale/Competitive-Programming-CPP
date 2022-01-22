#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;

   while(t--){
      ll k;
      cin>>k;
      
      ll cnt = 0;
      while(k % 2 == 0){
         cnt++;
         k /= 2;
      }
      cout<<cnt<<endl;
      
   }

   return 0;
}