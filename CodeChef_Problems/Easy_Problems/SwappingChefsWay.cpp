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
      ll n;
      cin>>n;

      string s;
      cin>>s;

      ll fidx = 0, lidx = n - 1;
      while(fidx <= lidx){
         if(s[fidx] > s[lidx]){
            swap(s[fidx], s[lidx]);
         }
         fidx++;
         lidx--;
      }

      
      if(is_sorted(s.begin(), s.end())){
         cout<<"YES"<<endl;
      }else{
         cout<<"NO"<<endl;
      }
   }

   return 0;
}