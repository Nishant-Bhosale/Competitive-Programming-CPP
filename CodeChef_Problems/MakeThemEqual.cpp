#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
   int t, n;

   cin>>t;

   for(int i = 0; i < t; i++){
      cin>>n;
      vector<int> arr;
      for(int j = 0; j < n; j++){
         int num;
         cin>>num;
         arr.push_back(num);
      }
      sort(arr.begin(), arr.end());
      cout<<arr[arr.size() - 1] - arr[0]<<endl;   
   }   
   return 0;
}