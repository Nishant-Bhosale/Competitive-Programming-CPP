#include<iostream>
using namespace std;

int main(){
   char inp;
   string h = "hello";

   int currentChar = 0;
   while(cin>>inp && currentChar != 5){
      if(h.at(currentChar) == inp){
         currentChar++;
      }
   }

   if(currentChar == 5){
      cout<<"YES";
   }else{
      cout<<"NO";
   }
   
   return 0;
}