#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(x) x.begin(), x.end()

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;
   while(t--){
      ll n;
      string s;
      cin>>n;
      s = to_string(n);
      bool flag = false;
      ll cntE = 0, cntO = 0;

      for(ll i = 0; i < s.size() ; i++){
         if((s[i] - '0') % 2 == 0){
            cntE++;
         }else{
            cntO++;
         }
      }     

      if(cntE >= 2 && (n % 10) % 2 == 0){
         cout<<"YES"<<endl;
      }else if(cntO >= 2 && (n % 10) % 2 != 0){
         cout<<"YES"<<endl;
      }else{
         cout<<"NO"<<endl;
      }
      
      // if(cntE == cntO && s.size() == 2){
      //    cout<<"NO"<<endl;
      //    continue;
      // }

      // if(cntE == cntO && s.size() != 2){
      //    cout<<"YES"<<endl;
      //    continue;
      // }

      // if(cntO == 1 && cntE == (s.size())){
      //    cout<<"NO"<<endl;
      //    continue;
      // }

      // if(cntE == 1 && cntO % 2 == 0){
      //    cout<<"YES"<<endl;
      //    continue;
      // }
      // if(cntE == 1 && cntO % 2 != 0){
      //    cout<<"NO"<<endl;
      //    continue;
      // }

      // if(cntO == s.size() && cntO % 2 == 0){
      //    cout<<"YES"<<endl;
      //    continue;
      // }
      // if(cntE == s.size()){
      //    cout<<"YES"<<endl;
      //    continue;
      // }

      // cout<<"YES"<<endl;
   };

   return 0;
}