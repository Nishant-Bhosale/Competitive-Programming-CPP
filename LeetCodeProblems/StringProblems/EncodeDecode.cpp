#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(x) x.begin(), x.end()

typedef long long ll;

vector<string> decode(string s){
   int i = 0;
   vector<string> vec;
   while(i < s.size()){
      int j = i;
      string num = "";
      while(s[j] != '%'){
         if(s[j] != '%') num += s[j];
         j++;
      }
      // cout<<num<<endl;
      int len = stoi(num);
      string a = "";
      a += s.substr(j + 1, j + len - 1);
      // cout<<a<<endl;
      vec.emplace_back(a);
      i += j + 1 + len;
   }
   return vec;
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll n;
   cin>>n;
   vector<string> arr;
   for(ll i = 0;i<n;i++){
      string a;
      cin>>a;
      arr.push_back(a);
   }

   string ans = "";
   for(int i = 0; i < n; i++){
      string len = to_string(arr[i].size());
      ans += len + "%" + arr[i];
   }

   vector<string> res = decode(ans);
   cout<<endl;
   for(int i = 0; i < res.size(); i++){
      cout<<res[i]<<endl;
   }

   return 0;
}