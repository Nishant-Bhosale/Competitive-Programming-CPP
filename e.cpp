#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll n;
   cin>>n;
   
   vector<ll> arr;   
   for(int i = 0; i < n; i++){
      ll num;
      cin>>num;
      arr.emplace_back(num);
   }

   sort(arr.begin(), arr.end());

   ll cnt = 0;
   ll j = 0;
   ll maxVal = -1;
   for(int i = 0; i < n; i++){
      while(j < n && arr[j] - arr[i] <= 5){
         j++;
         maxVal = max(maxVal, j - i);
      }
   }

   cout<<maxVal<<endl;
   return 0;
}