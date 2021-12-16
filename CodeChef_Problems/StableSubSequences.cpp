#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;

   while(t--){
      int n;
      cin>>n;

      vector<int> arr;

      for(int i = 0; i < n; i++){
         int num;
         cin>>num;
         arr.emplace_back(num);
      }

      if(count(arr.begin(), arr.end(), arr[0]) == arr.size()){
         cout<<0<<endl;
         continue;
      }else{
         int maxa = arr[0];

         for(int i = 0; i < n; i++){
            maxa = max(maxa, arr[i]);
         }

         if(arr[arr.size() -  1] == maxa){
            cout<<1<<endl;
            continue;
         }else{
            cout<<2<<endl;
         }
      }
   }
   return 0;
}