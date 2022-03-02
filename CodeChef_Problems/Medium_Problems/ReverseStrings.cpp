#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;

   while(t--){
      string s, temp;
      cin>>s;
      temp = s;
      reverse(temp.begin(), temp.end());

      ll cnt = 0;
      for(ll i = 0; i < s.size(); i++){
         if(s[i] == temp[cnt]){
            cnt++;
         }
      }

      cout<<s.size() - cnt<<endl;
   }

   return 0;   
}