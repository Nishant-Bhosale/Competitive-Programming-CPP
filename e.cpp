#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(x) x.begin(), x.end()

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;
   while(t--){
      ll cnt = 0;
      for(ll i = 1; i <= 1000; i++){
         if(i % 3 == 0 && i % 5 != 0 && i % 7 != 0){
            cnt++;
         }
      }
      cout<<cnt<<endl;
   };

   return 0;
}