#include<bits/stdc++.h>
using namespace std;

int main(){
   int b, k;
   cin>>b>>k;
   long long n = 0;
   for(int i = 1; i <= k; i++){
      int num;
      cin>>num;

      n = n * b + num;
   }  

   cout<<(n % 2 == 0 ? "even" : "odd")<<endl;

   return 0;
}