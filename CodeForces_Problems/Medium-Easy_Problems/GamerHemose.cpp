#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;

   while(t--){
      int n, h;

      cin>>n>>h;
      
      vector<int> arr(n);
      for(int i = 0; i < n; i++){
         int num;
         cin>>num;
         arr.emplace_back(num);
      }

      sort(arr.begin(), arr.end());

      if(arr[arr.size() - 1] > h){
         cout<<1<<endl;
         continue;
      }

      //BRUTE FORCE APPROACH
      
      // int moves = 0;
      // bool f = true;
      // while(h > 0){
      //    if(f){
      //       h -= arr[arr.size() - 1];
      //       f = false;
      //    }else{
      //       h -= arr[arr.size() - 2];
      //       f = true;
      //    }
      //    moves++;
      // }

      int sum = arr[arr.size() - 1] + arr[arr.size() - 2];
      int ans;
      if(h % sum == 0){
         ans = 2 * (h / sum);
      }else if(h % sum <= arr[arr.size() - 1]){
         ans = (2 * (h / sum)) + 1;
      }else{
         ans = (2 * (h / sum)) + 2;
      }

      cout<<ans<<endl;
   }

   return 0;
}