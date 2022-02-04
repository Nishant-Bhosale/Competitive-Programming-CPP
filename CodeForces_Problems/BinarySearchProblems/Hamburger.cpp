#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

ll nb, ns, nc, pb, ps, pc, rubs;
ll cntB, cntS, cntC;
string s;
ll burgerPrice(ll x){
   return (max(0LL, (cntB * x) - nb) * pb) + (max(0LL, (cntC * x) - nc) * pc) + (max(0LL, (cntS * x) - ns) * ps);
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   cin>>s;

   cin>>nb>>ns>>nc>>pb>>ps>>pc>>rubs;

   cntB = count(s.begin(), s.end(), 'B');
   cntS = count(s.begin(), s.end(), 'S');
   cntC = count(s.begin(), s.end(), 'C');

   // ll cst1 = (cntB * pb) + (cntS * ps) + (cntC * pc);
   ll left = 0, ans = 0, right = 1e14;

   while(left <= right){
      ll mid = left + (right - left) / 2;
      ll price = burgerPrice(mid);

      if(price > rubs){
         right = mid - 1;
      }else{
         ans = mid;
         left = mid + 1;
      }
   }

   cout<<ans<<endl;
   return 0;
}