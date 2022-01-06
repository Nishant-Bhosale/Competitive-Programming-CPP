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
      ll n, k;
      cin>>n>>k;

      vector<pair<int, int>> arr;

      for(int i = 0; i < n; i++){
         int num;
         cin>>num;
         arr.emplace_back(num, i);
      }

      sort(arr.begin(), arr.end());

      int ans = 1;

      for(int i = 1; i < n; i++){
         if(arr[i - 1].second + 1 != arr[i].second){
            ans++;
         }
      }

      cout<<(ans <= k ? "yes" : "no")<<endl;
   }

   return 0;
}