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
      uint32_t n;
      cin>>n;

      string str = to_string(n);
      cout<<str<<endl;
      __builtin_popco
      int ans = count(str.begin(), str.end(), '1');
      cout<<ans<<endl;
   };

   return 0;
}