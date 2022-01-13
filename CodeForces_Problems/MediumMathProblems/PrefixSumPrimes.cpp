#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;


int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int n;
   cin>>n;

   int cnt1 = 0;
   for(int i = 1; i <= n; i++){
      int num;
      cin>>num;
      if(num == 1) cnt1++;
   }

   int cnt2 = n - cnt1;

   if(!cnt1 || !cnt2){
      for(int i = 0 ; i < cnt1; i++){
         cout<<1<<" ";
      }
      for(int i = 0; i < cnt2; i++){
         cout<<2<<" ";
      }
      cout<<endl;
   }else{
      cout<<2<<" "<<1<<" ";
      
      for(int i = 0; i < cnt2 - 1; i++){
         cout<<2<<" ";
      }
      for(int i = 0; i < cnt1 - 1; i++){
         cout<<1<<" ";
      }
      cout<<endl;
   }

   return 0;
}