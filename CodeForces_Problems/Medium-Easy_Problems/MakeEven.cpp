#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;

   while(t--){
      string n;
      cin>>n;

      if((n.back() - '0') % 2 == 0){
         cout<<"0\n";
         continue;
      }else if((n[0] - '0') % 2 == 0){
         cout<<"1\n";
         continue;
      }

      int c2 = count(n.begin(), n.end(), '2');
      int c4 = count(n.begin(), n.end(), '4');
      int c6 = count(n.begin(), n.end(), '6');
      int c8 = count(n.begin(), n.end(), '8');

      if(c2 > 0 || c4 > 0 || c6 > 0 || c8 > 0){
         cout<<"2\n";
         continue;
      }

      cout<<"-1\n";
   }
   return 0;
}