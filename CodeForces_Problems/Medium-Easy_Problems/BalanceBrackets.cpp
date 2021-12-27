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
      int n, mainCnt = 0;
      cin>>n;
      string s;
      cin>>s;

      int balance = 0, ans = 0;
      for(int i = 0; i < n; i++){
         if(s[i] == '('){
            balance++;
         }else{
            balance--;
            if(balance < 0){
               balance = 0;
               ans++;
            }
         }
      }

      cout<<ans<<endl;
   }   

   return 0;
}