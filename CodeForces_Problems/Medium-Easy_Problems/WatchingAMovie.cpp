#include<bits/stdc++.h>
using namespace std;

int main(){
   int n, x;

   cin>>n>>x;
   int count = 0;
   int y = 0;
   for(int i = 1; i <= n; i++){
      int l, r;
      cin>>l>>r;

      count += (r - l + 1);
      count += (l - y - 1)%x;
      y = r;
   }

   cout<<count;

   return 0;
}