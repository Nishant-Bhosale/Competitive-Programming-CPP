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
      ll n, m;
      cin>>n>>m;

      vector<vector<int>> arr(n, vector<int> (m));
      for (int i = 0; i < n; ++i) {
         string s;
         cin >> s;
         for (int j = 0; j < m; ++j) {
               arr[i][j] = s[j] - '0';
         }
      }
      
      bool flag = true;
      for(ll i = 0; i < n - 1; i++){
         for(ll j = 0; j < m - 1; j++){
            ll cnt = 0;
            if(arr[i][j] == 1 ){
               cnt++;
            }
            if( arr[i + 1][j] == 1){
               cnt++;
            }
            if(arr[i][j + 1] == 1){
               cnt++;
            }
            if(arr[i + 1][j + 1] == 1){
               cnt++;
            }
            if(cnt == 3){
               flag = false;
               break;
            }
         }
      }

      if(flag){
         cout<<"YES"<<endl;
      }else{
         cout<<"NO"<<endl;
      }
   }

   return 0;
}