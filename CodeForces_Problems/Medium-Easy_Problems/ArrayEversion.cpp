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

      int lastEl = arr[arr.size() - 1];
      int cnt = 0;
      for(int i = arr.size() - 2; i >= 0; i--){
         if(arr[i] > lastEl){
            cnt++;
            lastEl = arr[i];
         }
      }

      cout<<cnt<<endl;
   }
   return 0;
}