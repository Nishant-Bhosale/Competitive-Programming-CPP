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

      int maxa = max(arr.begin(), arr.end());

      if(count(arr.begin(), arr.end(), arr[0]) == arr.size()){
         cout<<0<<endl;
      }

      cout<<maxa;
      // }else{
      //    int max = 0;

      //    for(int i = 0; i < n; i++){
      //       if(arr[i] > max){

      //       }
      //    }
      // }
   }
   return 0;
}