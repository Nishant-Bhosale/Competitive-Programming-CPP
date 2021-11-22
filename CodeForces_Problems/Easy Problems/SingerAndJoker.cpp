#include<iostream>
using namespace std;

int main(){
   int n , time;

   cin>>n>>time;

   int jokes = 0;
   int sum = 0;
   for(int i = 0; i < n; i++){
      int minutes;
      cin>>minutes;
      sum += minutes;

      if(sum + (n - 1) * 10 > time){
         cout<<"-1";
         return 0;
      }

   }
   cout<<(time - sum) / 5<<endl;
   return 0;
}