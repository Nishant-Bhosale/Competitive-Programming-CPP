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
      vector<int, vector<bool>> mark;

      vector<int> l(n);
      vector<int> r(n);
      for(int i = 0; i < n; i++){
         cin>>l[i]>>r[i];
         mark[l[i]][r[i]] = true;
      }

      for(int i = 0; i < n; i++){
         for(int j = l[i]; j <= r[i]; j++){
            if((j == l[i] || mark[l[i]][j - 1]) && (j == r[i] || mark[j + 1][r[i]])){
               cout<<l[i]<<" "<<r[i]<<" "<<j<<endl;
               break;
            }
         }
      }
   }

   return 0;
}