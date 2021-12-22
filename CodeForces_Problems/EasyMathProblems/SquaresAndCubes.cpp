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
      ll n;
      cin>>n;

      set<int> st;
      for(ll i = 1; i * i <= n; i++){
         st.insert(i * i);
      }
      for(ll i = 1; i * i * i <= n; i++){
         st.insert(i * i * i);
      }

      cout<<st.size()<<endl;
   }   

   return 0;
}