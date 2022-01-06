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

      vector<ll> arr1;
      vector<ll> arr2;

      for(int i = 0; i < n; i++){
         ll num;
         cin>>num;
         arr1.emplace_back(num);
      }

      ll answer = 0;
      ll pow = 1;

      for(int i = 0; i < 32; i++){
         ll cnt = 0;
         for(int j = 0; j < n; j++){
            if(arr1[j] % 2 == 1){
               cnt++;
            }
            arr1[j] /= 2;
         }
         if(cnt > 1){
            answer = answer + pow;
         }
         pow *= 2;
      }
      
      cout<<answer<<endl;
   }

   return 0;
}