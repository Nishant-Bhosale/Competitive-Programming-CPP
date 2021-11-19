#include<iostream>
using namespace std;

int main(){
   int rows, ele;

   cin>>rows;

   int matrix[5][5];

   int rowPos;
   int colPos;

   for(int i = 0; i < rows; i++){
      for(int j = 0; j < rows; j++){
         cin>>ele;
         if(ele == 1){
            rowPos = i;
            colPos = j;
         }
         matrix[i][j] = ele;
      }
   }
   int sum = abs(rowPos - 2) + abs(colPos - 2);
   cout<<sum<<endl;
   return 0;
}