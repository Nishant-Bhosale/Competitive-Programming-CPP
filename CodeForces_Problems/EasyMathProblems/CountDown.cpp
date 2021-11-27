#include<iostream>
using namespace std;

int main(){
   int t;

   cin>>t;

   while(t--){
      string s;
      int sum = 0;
      int count = 0;
      bool found = false;
      int n;
      cin>>n>>s;

      for(int i = 0; i < n; i++){
         if(s[i] != '0'){
            sum += (int)s[i] - 48 + ( i < n - 1);
         }
      }
      cout<<sum<<endl;
   }
   return 0;
}