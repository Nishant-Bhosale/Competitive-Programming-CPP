#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;

   cin>>t;

   while(t--){
      int n;
      vector<int> arr;
      cin>>n;

      if(n == 1){
         cout<<0<<endl;
         continue;
      }

      for(int i = 0; i < n; i++){
         int a;
         cin>>a;
         arr.emplace_back(a);
      }

      for(int i = 0; i < arr.size() - 1; i++){
         if(arr[i])
      }
   }

   return 0;
}