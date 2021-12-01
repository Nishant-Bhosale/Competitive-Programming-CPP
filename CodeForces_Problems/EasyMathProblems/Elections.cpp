#include<iostream>
using namespace std;

int main(){
   int t;
   cin>>t;

   while(t--){
      long long a, b, c;

      cin>>a>>b>>c;

      cout<<max(a, max(b, c) + 1) - a<<' '<<max(b, max(a, c) + 1) - b<<' '<<max(c, max(b, a) + 1) - c<<endl;

      // if(a == b && b == c && c == a){
      //    cout<<(a + 1)<<" "<<(b + 1)<<" "<<(c + 1)<<endl;
      //    continue;
      // }      
      
      // int mx = max(a, max(b, c));

      // if(mx == a){
      //    cout<<0<<" "<<(mx - b + 1)<<" "<<(mx - c + 1)<<endl;
      //    continue;
      // }else if(mx == b){
      //    cout<<(mx - a + 1)<<" "<<0<<" "<<(mx - c + 1)<<endl;
      //    continue;
      // }else if(mx == c){
      //    cout<<(mx - a + 1)<<" "<<(mx - b + 1)<<" "<<0<<endl;
      //    continue;
      // }
   }
   return 0;
}