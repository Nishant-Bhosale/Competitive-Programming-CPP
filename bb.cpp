#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;

   cin>>t;

   while(t--){
      int n;
      vector<int> arr;
      cin>>n;

      for(int i = 0; i < n; i++){
         int a;
         cin>>a;
         arr.emplace_back(a);
      }

      if(arr.size() == 1){
         cout<<0<<endl;
         continue;
      }

      bool isDup = false;

      for(int i = 0; i < arr.size() - 1; i++){
         if(count(arr.begin(), arr.end(), arr[i]) > 1){
            isDup = true;
            break;
         }
      }

      if(isDup){
         cout<<(n - 1)<<endl;
      }else{
         cout<<-1<<endl;
      }
   }

   return 0;
}

// for(int j = i+1; j < arr.size() - 1; j++){
         //    if(arr[i] == arr[j]){
         //       isDup = true;
         //       break;
         //    }
         // }