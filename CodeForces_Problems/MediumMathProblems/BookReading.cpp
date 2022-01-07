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
      long long int n, m;
      cin>>n>>m;

      long long int div = n / m;
      if(m > n){
         cout<<0<<endl;
         continue;
      }

      long long int sum1 = 0;
      long long int sum2 = 0;

      for(int i = 0; i < 10; i++){
         sum1 += ((m * (i + 1)) % 10);
      }

      for(int i = 0; i < div % 10; i++){
         sum2 += ((m * (i + 1)) % 10);
      }

      cout<<((div / 10) * (sum1) + sum2)<<endl;
   }

   return 0;
}