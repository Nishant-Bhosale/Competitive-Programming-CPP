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
      ll n, k;
      cin>>n>>k;

      if(n == 1){
         cout<<k<<endl;
         continue;
      }   
      if(n == k){
         cout<<1<<endl;
      }else{
         ll cf = (n + k - 1) / k;

         k = k * cf;

         cout<<(k + n - 1)/n<<endl;
      }
   }

   return 0;
}