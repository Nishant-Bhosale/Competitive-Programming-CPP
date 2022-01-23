#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

void solve(){
   ll first, last, k;
   cin>>first>>last>>k;

   if(first == last && first != 1){
      cout<<"YES"<<endl;
   }else if(first == last && first == 1){
      cout<<"NO"<<endl;
   }else{
      long long int gap = last - first + 1;
      long long int p = (last / 2) - ceil((float)first/2) + 1;
      if(k >= gap - p){
         cout<<"YES"<<endl;
      }else{
         cout<<"NO"<<endl;
      }
   }
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;

   while(t--){
      solve();
   }
   return 0;
}