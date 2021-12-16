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
      }else{
         cout<<arr.size() - 1<<endl;
      }
   }
   return 0;
}