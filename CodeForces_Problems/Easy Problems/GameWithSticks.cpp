#include<iostream>
using namespace std;

int main(){
   int row, col;

   cin>>row>>col;

   if(row > col){
      swap(row, col);
   }

   if(row % 2 == 0){
      cout<<"Malvika"<<endl;
   }else{
      cout<<"Akshat"<<endl;
   }
   
   return 0;
}