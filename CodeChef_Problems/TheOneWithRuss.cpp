#include<iostream>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
      int n, x, k;

      cin>>n>>x>>k;

      int arr1[n];
      int arr2[n];

      for(int i = 0; i < n; i++){
         cin>>arr1[i];
      }

      for(int i = 0; i < n; i++){
         cin>>arr2[i];
      }

      int cnt = 0;
      for(int i = 0; i < n; i++){
         if(abs(arr1[i] - arr2[i]) <= k){
            cnt++;
         }
      }

      if(cnt >= x){
         cout<<"YES"<<endl;
      }else{
         cout<<"NO"<<endl;
      }
   }   
   return 0;
}