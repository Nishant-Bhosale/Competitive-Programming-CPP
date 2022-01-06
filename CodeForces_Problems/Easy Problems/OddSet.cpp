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

      ll cntEven = 0;
      ll cntOdd = 0;

      for(int i = 0; i < 2 * n; i++){
         ll num;
         cin>>num;

         if(num % 2 == 0){
            cntEven++;
         }else{
            cntOdd++;
         }
      }

      cout<<(cntEven == cntOdd ? "Yes" : "No")<<"\n";
   }

   return 0;
}