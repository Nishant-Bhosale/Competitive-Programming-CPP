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

      int len = 0;
      if(arr[0] == 0){
         len = 1;
      }else{
         len = 2;
      }

      for(int i = 0; i < arr.size(); i++){
         if(arr[i - 1] == 0 && arr[i] == 0){
            len = -1;
            break;
         }
         if(arr[i - 1] == 1 && arr[i] == 1){
            len += 5;
         }
         if(arr[i] == 1 && arr[i - 1] == 0){
            len += 1;
         }
      }

      cout<<len<<endl;
   }
   return 0;
}