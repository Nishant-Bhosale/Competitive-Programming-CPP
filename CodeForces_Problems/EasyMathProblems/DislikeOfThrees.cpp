#include<iostream> 
#include<vector> 
using namespace std;

int main(){
   int t,n = 2500;
   cin>>t;
   vector<int> arr;

   for(int i = 1; i <= n; i++){
      if(!(i % 10 == 3 || i % 3 == 0)){
         arr.push_back(i);
      }
   }

   while(t--){
      int k;

      cin>>k;

      cout<<arr[k - 1];
   }
   return 0;
}