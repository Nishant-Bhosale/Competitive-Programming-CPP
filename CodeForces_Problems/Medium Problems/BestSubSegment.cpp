#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll n;
   cin>>n;

   int mx = -1, mxLen = 0;
   int curEl = -1, curLen = 0;
   for(int i = 0; i < n; i++){
      int num; cin>>num;

      if(num != curEl){
         curEl = num;
         curLen = 0;
      }
      curLen++;

      if(mx < curEl){
         mx = curEl;
         mxLen = 0;
      }

      if(mx == curEl){
         mxLen = max(mxLen, curLen);
      }
   }

   cout<<mxLen<<endl;

   return 0;
}