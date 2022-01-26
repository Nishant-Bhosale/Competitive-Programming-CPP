#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   
   ll moves, cAtEnd;
   cin>>moves>>cAtEnd;

   if(moves == 1){
      cout<<0<<endl;
   }else{
      long long left = -1, right = moves + 1;

      while(right - left > 1){
         long long m = (left + right) / 2;
         if((moves - m) * (moves - m + 1)/2 - m > cAtEnd){
            left = m;
         }else{
            right = m;
         }
      }
      cout<<right<<endl;
   }
   
   return 0;
}