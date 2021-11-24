#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
   int n, k;

   cin>>n>>k;
   vector<int> arr;

   for(int i = 0; i < n; i++){
      int f, t;
      cin>>f>>t;

      int val;

      if(t > k){
         val = f - (t - k);
      }else{
         val = f;
      }
      arr.push_back(val);
   }

   sort(arr.begin(),arr.end());
   cout<<arr[arr.size() - 1]<<endl;

   return 0;
}