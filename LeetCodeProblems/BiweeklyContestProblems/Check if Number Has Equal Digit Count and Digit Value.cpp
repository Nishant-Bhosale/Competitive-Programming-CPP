#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(x) x.begin(), x.end()

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   string num;
   cin>>num;

   map<int,int> mp;
   int z = 0;
   for(int i = 0; i < num.size(); i++){
      mp[(num[i] - '0')]++;
   }

   bool flag = true;

   for(int i = 0; i < num.size(); i++){
      if(num[i] - '0' != mp[i]){
         flag = false;
      }
   }
   cout<<flag<<endl;
   return flag;
   return 0;
}