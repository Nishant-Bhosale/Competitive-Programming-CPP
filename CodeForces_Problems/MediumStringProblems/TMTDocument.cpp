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
      ll n;
      cin>>n;

      string s;
      cin>>s;

      ll cntT = count(s.begin(), s.end(), 'T');
      ll cntM = count(s.begin(), s.end(), 'M');
      if((cntM * 2) != cntT){
         cout<<"NO"<<endl;
      }else{
         bool flag = true;
         vector<char> m;
         vector<char> t;
         for(int i = 0; i < n; i++){
            if(s[i] == 'T'){
               t.emplace_back(i);
            }else{
               m.emplace_back(i);
            }
         }

         for(int i = 0; i < m.size(); i++){
            if(m[i] < t[i] || m[i] > t[i + m.size()]){
               flag = false;
               break;
            }
         }

         cout<<(flag ? "YES" : "NO")<<endl;
      }
   }

   return 0;
}