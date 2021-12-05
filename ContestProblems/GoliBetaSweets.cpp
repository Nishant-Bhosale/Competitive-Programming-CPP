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

      sort(arr.begin(), arr.end());

      int total = 0;

      for(int i = arr.size() - 1; i >= 0; i--){
         total += arr[i];
      }

      if(total % 2 == 0){
         cout<<total<<endl;
         continue;
      }else{
         int id = 0;
         while(total % 2 != 0){
            total -= arr[id];
            id++;
         }
         cout<<total<<endl;
         continue;
      }
   }

   return 0;
}