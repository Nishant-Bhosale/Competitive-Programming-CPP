#include<iostream>
#include<algorithm>
using namespace std;

int main(){
   int t;
   cin>>t;
   string s, s1, s2;

   for(int i = 0; i < t; i++){
      cin>>s;
      s1 += s;
   }
   s2 = s1;
   reverse(s2.begin(), s2.end());

   if(s2 == s1){
      cout<<"YES";
   }else{
      cout<<"NO";
   }
   return 0;
}