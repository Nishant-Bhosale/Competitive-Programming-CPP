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
      ll rooks, num;
      cin>>num>>rooks;

      if(rooks > ceil((double)num/2)){
         cout<<-1<<endl;
      }else{
         for(int i = 0; i < num; i++){
            for(int j = 0; j < num; j++){
               if(i % 2 == 0 && rooks > 0 && i == j){
                  cout<<"R";
                  rooks--;
               }else{
                  cout<<".";
               }
            }
            cout<<endl;
         }
      }
   }

   return 0;
}