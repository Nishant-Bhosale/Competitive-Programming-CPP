#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

bool isUnique(vector<ll> arr){
   ll n = arr.size();
   unordered_set<ll> s;
   for (int i = 0; i < n; i++) {
      s.insert(arr[i]);
   }

   return (s.size() == arr.size());
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int t;
   cin>>t;

   while(t--){
      ll n;
      cin>>n;

      vector<ll> arr;
      for(int i = 0; i < n; i++){
         ll num;
         cin>>num;
         arr.emplace_back(num);
      }

      if(isUnique(arr)){
         cout<<-1<<endl;
         continue;
      }
      if(count(arr.begin(), arr.end(), arr[0]) == arr.size()){
         cout<<(arr.size() - 1)<<endl;
         continue;
      }

      
   }

   return 0;
}