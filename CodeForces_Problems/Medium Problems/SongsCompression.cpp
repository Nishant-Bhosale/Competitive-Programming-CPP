#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

bool comparePair(pair<int,int> a, pair<int,int> b){
   return a.first - a.second > b.first - b.second;
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll n, m, sum1 = 0, sum2 = 0;
   cin>>n>>m;

   vector<pair<ll, ll>> arr;
   for(int i = 0; i < n; i++){
      ll a, b;
      cin>>a>>b;
      sum1 += b;
      sum2 += a;
      arr.emplace_back(a, b);
   }
   
   if(sum1 > m){
      cout<<-1<<endl;
   }else{
      sort(arr.begin(), arr.end(), comparePair);

      for(int i = 0; i < n; i++){
         if(sum2 <= m){
            cout<<(i)<<endl;
            return 0;
         }
         sum2 -= arr[i].first - arr[i].second;
      }
      
      if(sum2 <= m){
         cout<<n<<endl;
      }
   }

   return 0;
}