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
      int n, k, cnt = 0;
      cin>>n>>k;

      for(int i = 0; i < n; i++){
         int num;
         cin>>num;
         if(num > k){
            cnt++;
         }
      }

      cout<<cnt<<endl;
   }

   return 0;
}