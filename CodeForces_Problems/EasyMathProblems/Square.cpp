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
      ll l1, b1;
      ll l2, b2;
      cin>>l1>>b1>>l2>>b2;

      cout<<(max(l1, b1) == max(l2, b2) && max(l1, b1) == min(l1, b1) + min(l2, b2) ? "YES" : "NO" )<<endl;       
   }

   return 0;
}