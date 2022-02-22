#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;

   while(t--){
      string s;
      cin>>s;

      if(islower(s[0]) && islower(s[1]) && islower(s[2])){
         cout<<"YES"<<endl;
         continue;
      }

      ll posR, posG, posB, posr, posb, posg;

      for(ll i = 0; i < s.size(); i++){
         if(s[i] == 'R'){
            posR = i;
         }
         if(s[i] == 'G'){
            posG = i;
         }
         if(s[i] == 'B'){
            posB = i;
         }
         if(s[i] == 'r'){
            posr = i;
         }
         if(s[i] == 'g'){
            posg = i;
         }
         if(s[i] == 'b'){
            posb = i;
         }
      }

      if(posR < posr){
         cout<<"NO"<<endl;
         continue;
      }
      if(posB < posb){
         cout<<"NO"<<endl;
         continue;
      }
      if(posG < posg){
         cout<<"NO"<<endl;
         continue;
      }
      cout<<"YES"<<endl;
   }

   return 0;
}