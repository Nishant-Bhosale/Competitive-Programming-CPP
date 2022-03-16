#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   // cin>>num>>s>>m;

   // cout<<num<<endl;
   // cout<<s<<endl;
   // cout<<m<<endl;

   // if(num == 10){
   //    cout<<"BOL Bhai"<<endl;
   // }else{
   //    cout<<"Teri maa ka ..."<<endl;
   // }
   // ll t;
   // cin>>t;

   // while(t--){
   //    int arr[4];
   //    for(ll i = 0; i < 5; i++){
   //       cin>>arr[i];
   //    }

   //    for(ll i = 0; i < 4; i++){
   //       cout<<arr[i]<<" ";
   //    }

   //    cout<<endl;
   // }

   ll n;
   cin>>n;

   vector<ll> arr(n);

   for(ll i = 0; i < n; i++){
      // ll num;
      // cin>>num;
      // arr.emplace_back(num);
      cin>>arr[i];
   }

   // ll maxVal = *min_element(arr.begin(), arr.end());

   // cout<<maxVal<<endl;
   // n = unique(arr.begin(), arr.end());
   // arr.resize(n);
   
   // for(ll i = 0; i < arr.size(); i++){
   //    cout<<arr[i]<<" ";
   // }



   ll num;
   cin>>num; 
   ll cnt;
   cnt = count(arr.begin(), arr.end(), num);
   cout<<cnt<<endl; 
   return 0;
}