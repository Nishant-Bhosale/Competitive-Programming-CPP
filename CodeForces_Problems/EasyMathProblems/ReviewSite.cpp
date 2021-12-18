#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;

   while(t--){
      int n;
      cin>>n;

      map<int, int> mp;

      for(int i = 1; i <= n; i++){
         int num;
         cin>>num;

         mp[num]++;
      }

      cout<<(abs(mp[3] + mp[1]))<<endl;
   }
   return 0;
}