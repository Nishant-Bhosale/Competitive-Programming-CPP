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
      ll n;
      cin>>n;


      vector<ll> arr;
      for(ll i = 0; i < n; i++){
         ll num;
         cin>>num;
         arr.emplace_back(num);
      }
      if(n == 1){
         cout<<"First"<<endl;
         continue;
      }

      if(count(arr.begin(), arr.end(), 1) == arr.size()){
         if(n % 2 == 0){
            cout<<"Second"<<endl;
         }else{
            cout<<"First"<<endl;
         }
         continue;
      }

      bool flag = true;
      for(ll i = 0; i < arr.size(); i++){
         if(arr[i] > 1 && i % 2 == 0){
            flag = true;
            break;
         }
         if(arr[i] > 1 && i % 2 == 1){
            flag = false;
            break;
         }
      }

      cout<<(flag ? "First" : "Second")<<endl;
   }

   return 0;
}