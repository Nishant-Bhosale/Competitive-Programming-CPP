#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int n, x, y;
   string s;
   cin>>n>>x>>y;
   cin>>s;

   int cnt = 0;
  
   for(int i = n - x; i < n; i++){
      if(i == n - y - 1){
         cnt += s[i] != '1';
      }else{
         cnt += s[i] != '0';
      }
   }
   cout<<cnt<<endl;

   return 0;
}