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

   vector<ll> arr;

   for(int i = 0; i < n; i++){
      ll num;
      cin>>num;
      arr.emplace_back(num);
   }

   sort(arr.begin(), arr.end(), greater<int>());

   if((arr[1] + arr[2]) <= arr[0]){
      cout<<"NO"<<endl;
   }else{
      cout<<"YES"<<endl;
         cout<<arr[2]<<" ";
         cout<<arr[0]<<" ";
         cout<<arr[1]<<" ";
      for(int i = 3; i < n; i++){
         cout<<arr[i]<<" ";
      }
   }

   return 0;
}