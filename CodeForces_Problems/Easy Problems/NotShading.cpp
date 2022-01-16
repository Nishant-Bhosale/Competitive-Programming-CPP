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
      int n,m,r,c;
      cin>>n>>m>>r>>c;

      char a[n][m];

      for(int i = 0; i < n; i++){
         for(int j = 0; j < m; j++){
            cin>>a[i][j];
         }
      }

      if(a[r-1][c-1] == 'B'){
         cout<<0<<endl;
         continue;
      }

      bool white = true;
      for(int i = 0; i < n; i++){
         for(int j = 0; j < m; j++){
            if(a[i][j] == 'B'){
               white = false;
            }
         }
      }

      if(white){
         cout<<-1<<endl;
         continue;
      }

      bool found = false;
      for(int i = 0; i < n; i++){
         if(a[i][c - 1] == 'B'){
            found = true;
         }
      }
      for(int i = 0; i < m; i++){
         if(a[r - 1][i] == 'B'){
            found = true;
         }
      }

      if(found){
         cout<<1<<endl;
      }else{
         cout<<2<<endl;
      }
   }

   return 0;
}