#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;

   while(t--){
      vector<long long> arr;
      for(int i = 0; i < 7; i++){
         int num;
         cin>>num;
         arr.emplace_back(num);
      }

      long long last =  arr[arr.size() - 1];

      long long first = arr[0];
      for(int i = 1; i < arr.size() - 1; i++){
         for(int j = i + 1; j < arr.size() - 1; j++){
            if(arr[i] + arr[j] + first == last){
               cout<<arr[0]<<" "<<arr[i]<<" "<<arr[j]<<endl;
               break;
            }
         }
      }
   }
   return 0;
}