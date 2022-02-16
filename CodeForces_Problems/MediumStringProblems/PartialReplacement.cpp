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
      ll n, k;
      cin>>n>>k;

      string s;
      cin>>s;

      ll i = s.find_first_of('*');

      if(n == 1 && s[0] == '*'){
         cout<<1<<endl;
         continue;
      }
      ll cnt = 1;

      while(true){
         ll j = min(i + k, n - 1);
         for(; i < j && s[j] == '.'; j--){ }
         if(i == j) break;
         cnt++;
         i = j;
      }

      cout<<cnt<<endl;
   }

   return 0;
}