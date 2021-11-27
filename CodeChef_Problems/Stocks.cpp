#include<iostream>
using namespace std;

int main(){
   int t;

   cin>>t;

   while(t--){
      float s, a, b, c;
      float calcVal;
      cin>>s>>a>>b>>c;
      
     
      calcVal = s + ((s/100) * c);      

      if(calcVal >= a && calcVal <= b){
         cout<<"Yes"<<endl;
      }else{
         cout<<"No"<<endl;
      }
   }
   
   return 0;
}