#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

bool compareStr(string s1, string s2){
   return s1.length() < s2.length();
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int n;
   cin>>n;

   vector<string> arr;
   for(int i = 0; i < n; i++){
      string s;
      cin>>s;
      arr.emplace_back(s);
   }

   sort(arr.begin(), arr.end(), compareStr);

   if(count(arr.begin(), arr.end(), arr[0]) == arr.size()){
      cout<<"YES"<<endl;
      for(auto it : arr){
         cout<<it<<endl;
      }
   }else{
      bool flag = true;
      for(int i = 0; i < n - 1; i++){
         if(arr[i + 1].find(arr[i]) != string::npos){
            flag = true;
         }else{
            flag = false;
            break;
         }
      }

      if(flag){
         cout<<"YES"<<endl;
         for(auto it : arr){
            cout<<it<<endl;
         }
      }else{
         cout<<"NO"<<endl;
      }
   }
   return 0;
}