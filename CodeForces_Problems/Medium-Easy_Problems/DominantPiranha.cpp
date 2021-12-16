#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;

   while(t--){
      int n;
      int maxE = 0;
      cin>>n;

      vector<int> arr;

      for(int i = 0; i < n; i++){
         int num;
         cin>>num;
         maxE = max(maxE, num);
         arr.emplace_back(num);
      }

      if(count(arr.begin(),arr.end(), arr[0]) == n){
         cout<<-1<<endl;
         continue;
      }else{
         int maxIdx = -1;

         for(int i = 0; i < n; i++){
            if(arr[i] != maxE){
               continue;
            }
            if(i > 0 && arr[i - 1] != maxE){
               maxIdx = i + 1;
            }
            if(i < n - 1 && arr[i + 1] != maxE){
               maxIdx = i + 1;
            }
         }

         cout<<maxIdx<<endl;
      }
   }
   return 0;
}