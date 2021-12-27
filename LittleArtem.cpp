#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int t;
   cin>>t;

   while(t--){
      int n, m;
      cin>>n>>m;

      cout<<'W';
      for(int i = 0; i < m - 1; i++){
         cout<<'B';
      }
      cout<<endl;

      for(int i = 0; i < n - 1; i++){
         for(int j = 0;  j < m; j++){
            cout<<'B';
         }
         cout<<endl;
      }
   }

   return 0;
}