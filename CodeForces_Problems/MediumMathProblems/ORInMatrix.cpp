#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int n, m;
   cin>>n>>m;

   int a[n][m];
   int b[n][m];
   for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
         cin>>a[i][j];
         b[i][j] = 1;
      }
   }

   for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
         if(a[i][j] == 0){
            for(int k = 0; k < n; k++){
               b[k][j] = 0;
            }
            for(int p = 0; p < m; p++){
               b[i][p] = 0;
            }
         }
      }
   }

   for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
         int d = 0;
         for(int k = 0; k < n; k++){
            d |= b[k][j];
         }
         for(int p = 0; p < m; p++){
            d |= b[i][p];
         }

         if(d != a[i][j]){
            cout<<"NO"<<endl;
            return 0;
         }
      }
   }

   cout<<"YES"<<endl;
   for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
         cout<<b[i][j]<<" ";
      }
      cout<<"\n";
   }
   return 0;
}