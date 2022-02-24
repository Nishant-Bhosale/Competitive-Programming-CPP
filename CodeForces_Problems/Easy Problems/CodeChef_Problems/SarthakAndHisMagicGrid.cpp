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
      int n;
      cin>>n;

      for(int i = 0; i < n; i++){
         for(int j = 0; j < n; j++){
            cout<<1<<" ";
         }
         cout<<endl;
      }
   }

   return 0;
}