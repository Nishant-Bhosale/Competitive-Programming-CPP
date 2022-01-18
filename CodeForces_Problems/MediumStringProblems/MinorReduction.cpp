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
      cin>>s;
      if(s.size() == 2){
         int a = 0;
         a += (s[0] - '0') + (s[1] - '0');
         cout<<a<<endl;
      }else{
         bool flag = true;
         int idx = 0;
         for(int i = 0; i < s.size(); i++){
            int a = (s[i] - '0') + (s[i+1] - '0');
           
            if(a < 10){
               continue;
            }
            if(a >= 10){
               idx = i;
               flag = false;
            }
         }

         if(flag){
            int add = (s[0] - '0') + (s[1] - '0');
            s.erase(0, 2);
            string b = to_string(add);
            for(int i = 0; i < s.size(); i++){
               b += s[i];
            }
            cout<<b<<endl;
         }else{
            int add = (s[idx] - '0') + (s[idx + 1] - '0');
            string b = to_string(add);
            s[idx] = b[0];
            s[idx + 1] = b[1];
            cout<<s<<endl;
         }
      }
   }

   return 0;
}