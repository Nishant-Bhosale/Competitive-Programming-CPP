#include<iostream>
using namespace std;

int main(){
   int n, minVal = 1001, ans = -1;
   int arr[101];
   cin>>n;
   for(int i = 1; i <= n; i++){
      cin>>arr[i];
      ans = max(ans, arr[i] - arr[i - 1]);
   }

   for(int i = 3; i <= n; i++){
      minVal = min(minVal, max(arr[i] - arr[i - 2], ans));
   }

   cout<<minVal<<endl;
   return 0;
}