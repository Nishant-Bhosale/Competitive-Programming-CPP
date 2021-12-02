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
      
      for(int i = 0; i < n/2; i++){
         cout<<arr[n - 1 - i]<<" "<<arr[0]<<endl;
      }
   }
   return 0;
}