#include<iostream>
using namespace std;

int main(){
   int t,n;
   int x = 1, y = 1;
   cin>>t;

   for(int i = 0; i<t; i++){
      cin>>n;
      int moves = 0;
      
      if(n % 2 == 0){
         cout<<n<<endl;
      }else{
         cout<<n - 1<<endl;
      }
   }
   return 0;
}