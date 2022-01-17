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
      string s;

      if(s.size() == 2){
         int a = 0;
         a += (s[0] - '0') + (s[1] - '0');
         cout<<a<<endl;
      }
   }

   return 0;
}