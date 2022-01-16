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
      string s;
      cin>>s;

      for(int i = 0; i < n; i++){
         if(s[i] == 'D'){
            s[i] = 'U';
            continue;
         }
         if(s[i] == 'U'){
            s[i] = 'D';
            continue;
         }
      }

      cout<<s<<endl;
   }
   return 0;
}