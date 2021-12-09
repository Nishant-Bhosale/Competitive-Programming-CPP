#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;

   cin>>n;

   vector<pair<int, int>> arr;
   for(int i = 1; i <= n; i++){
      int num;
      cin>>num;
      arr.emplace_back(num, i);
   }

   sort(arr.begin(), arr.end());

   if(arr[0].first == arr[1].first){
      cout<<"Still Rozdil"<<endl;
   }else{
      cout<<arr[0].second<<endl;
   }
   return 0;
}