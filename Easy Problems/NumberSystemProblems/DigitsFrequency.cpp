#include<iostream>
using namespace std;

int calculateFrequency(int num1, int freqNum){
   int count = 0;
   int remainder;
   while(num1 > 0){
      remainder = num1 % 10;

      if(remainder == freqNum){
         count++;
      }

      num1 /= 10;
   }
   return count;
}
int main(){
   int num1, freqNum;
   cout<<"Enter a number "<<endl;
   cin>>num1;
   cout<<"Enter the number whose frequency you want to calculate: "<<endl;
   cin>>freqNum;

   cout<<"The frequency of number "<<freqNum<<" in "<<num1<<" is "<<calculateFrequency(num1, freqNum)<<endl;
   return 0;
}