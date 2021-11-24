#include<iostream>
using namespace std;

int main(){
   int n, c, maxVal = 0;
   cin>>n>>c;
   int a[n];
   for(int i = 0; i < n; i++){
      cin>>a[i];
   }

   for(int i = 0; i < n - 1; i++){
      maxVal = max(maxVal, a[i] - a[i + 1] - c);
   }

   cout<<maxVal;
   return 0;
}