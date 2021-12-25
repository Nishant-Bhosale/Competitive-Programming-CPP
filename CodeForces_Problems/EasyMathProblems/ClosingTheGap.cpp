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
      int n;
      cin>>n;
      int sum = 0;
      for(int i = 0; i < n; i++){
         int num;cin>>num;
         sum += num;
      }

      if(sum % n == 0){
         cout<<0<<endl;
      }else{
         cout<<1<<endl;
      }
   }

   return 0;
}