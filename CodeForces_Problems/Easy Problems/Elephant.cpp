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

   if(n % 5 == 0){
      cout<<(n / 5)<<endl;
   }  else{
      ll ans = 0;
      ans += n / 5;
      ans += 1;
      cout<<ans<<endl;
   }


   return 0;
}