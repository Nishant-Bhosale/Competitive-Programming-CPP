#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int t;
   cin>>t;

   while(t--){
      long long int p;
      cin>>p;

      long long int money = 0, cnt = 0;

      while(money <= p){
         if(money < p){
            money += 1;
            cnt++;
         }

         if(money == p){
            break;
         }

         if((money * 2) <= p){
            money *= 2;
         }else{
            p -= money;
            money = 0;
         }

         if(money == p){
            break;
         }
      }

      cout<<cnt<<endl;
   }

   return 0;
}