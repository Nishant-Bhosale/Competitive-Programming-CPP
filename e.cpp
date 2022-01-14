#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int n;
   cin>>n;

   for(int i = 0; i < n; i++){
      string a, b;
      cin>>a>>b;

      if(a == b){
         cout<<"YES"<<endl;
         continue;
      }

      string res = "";

      for(int i = 0; i < b.size(); i++){
         if(res.size() == 0){
            res += b[0];
         }

         if(res[i - 1] != b[i]){
            res += b[i];
         }
      }

      cout<<res<<endl;
      // bool isOk = true;
      // for(int j = 0; j < a.size(); j++){
      //    int cnt = 0;
      //    for(int k = j; k < b.size(); k++){
      //       if(a[j] == b[k]){
      //          cnt++;
      //       }else{
      //          if(cnt){
      //             isOk = true;
      //             break;
      //          }else{
      //             isOk = false;
      //             break;
      //          }
      //       }
      //    }
      //    if(!isOk){
      //       break;
      //    }
      // }

      // cout<<(isOk ? "YES" : "NO")<<endl;
   }

   return 0;
}