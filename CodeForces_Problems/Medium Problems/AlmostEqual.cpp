#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll n;
   cin>>n;

   if(n%2 == 0){
      cout<<"NO"<<endl;
   }else{
      cout<<"YES"<<endl;
      for(int i = 0; i < 2*n; i++){
         if(i < n){
            cout<<(i + i + i % 2) + 1<<" ";
         }else{
            cout<<((i - n)*2 + i % 2) + 1<<" ";
         }
      }
   }
   return 0;
}