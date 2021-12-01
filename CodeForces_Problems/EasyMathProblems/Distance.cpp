#include<iostream>
using namespace std;

int main(){
   int t;
   cin>>t;

   while(t--){
      int x, y, xc = -1, yc = -1;

      cin>>x>>y;

      int dist = x + y;

      if(dist % 2 != 0){
         cout<<-1<<" "<<-1<<endl;
         continue;
      }else{
         int val = dist / 2;
         for(int i = 0; i <= 51; i++){
            for(int j = 0; j <= 51; j++){
               if(i + j == val && abs(x - i) + abs(y - j) == val){
                  xc = i;
                  yc = j;
               }
            }
         }

         cout<<xc<<" "<<yc<<endl;
      }
   }

   return 0;
}