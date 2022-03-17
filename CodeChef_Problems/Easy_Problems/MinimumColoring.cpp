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
      ll x1, x2, y1, y2;
      cin>>x1>>y1>>x2>>y2;

      x1--; y1--; x2--; y2--;
      vector<vector<ll>> arr(n);

      ll col[2];

      ll p1 = (x1 + y1) % 2;
      ll p2 = (x2 + y2) % 2;

      if(p1 == 0 && p2 == 0){
         col[0] = 1;
         col[1] = 3;
      }

      if(p1 == 0 && p2 == 1){
         col[0] = 1;
         col[1] = 2;
      }

      if(p1 == 1 && p2 == 0){
         col[0] = 2;
         col[1] = 1;
      }

      if(p1 == 1 && p2 == 1){
         col[0] = 3;
         col[1] = 1;
      }

      for(ll i = 0; i < n; i++){
         for(ll j = 0; j < m; j++){
            if(x1 == i && y1 == j){
               cout<<"1"<<" ";
               continue;
            }

            if(x2 == i && y2 == j){
               cout<<"2"<<" ";
               continue;
            }

            cout<<(col[(i + j) % 2])<<" ";
         }
         cout<<endl;
      }
   }

   return 0;
}