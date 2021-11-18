#include<iostream>
using namespace std;

int main(){
   char inp;

   while(cin>>inp){
      inp = tolower(inp);
      if(!(inp=='a'||inp=='e'||inp=='i'||inp=='o'||inp=='u'||inp=='y')){
         cout<<'.'<<inp;
      }
   }
   return 0;
}