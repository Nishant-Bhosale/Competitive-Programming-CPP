#include<iostream>
#include<utility>
#include<vector>
using namespace std;

int main(){
   int row, col;
   cin>>row>>col;
   set<int> st;
   char arr[row][col];
   for(int i = 0; i<row; i++){
      for(int j = 0; j<col; j++){
         char ch;
         cin>>ch;
         arr[i][j] = ch;
      }
   }

   for(int i = 0; i < row; i++){
      for(int j = 0; j < col; j++){
         // cout<<arr[i][j]<<endl;
         if(a[i][j] == 'S'){
            st.insert(i);
         }
      }
   }
   return 0;
}