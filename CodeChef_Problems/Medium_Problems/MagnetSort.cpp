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

      vector<ll> arr(n);
      for(ll i = 0; i < n; i++){
         cin>>arr[i];
      }

      string s;
      cin>>s;

      ll cntS = count(s.begin(), s.end(), 'S');
      ll cntN = count(s.begin(), s.end(), 'N');

      if(is_sorted(arr.begin(), arr.end())){
         cout<<0<<endl;
         continue;
      }

      if(cntS == s.size() || cntN == s.size()){
         cout<<-1<<endl;
         continue;
      }

      if(s[0] == 'N' && s[s.size() - 1] == 'S'){
         cout<<1<<endl;
         continue;
      }
      if(s[0] == 'S' && s[s.size() - 1] == 'N'){
         cout<<1<<endl;
         continue;
      }
   
      vector<ll> arr2 = arr;
      vector<ll> temp = arr;
      sort(arr2.begin(), arr2.end());

      ll fn = 0, ln = 0, fs = 0, ls = 0;

      fn = s.find_first_of('N');
      ln = s.find_last_of('N');

      fs = s.find_first_of('S');
      ls = s.find_last_of('S');

      sort(arr.begin() + fn, arr.begin() + ls + 1);

      if(arr == arr2){
         cout<<1<<endl;
         continue;
      }
      arr = temp; 
      sort(arr.begin() + fs, arr.begin() + ln + 1);

      if(arr == arr2){
         cout<<1<<endl;
         continue;
      }
      cout<<2<<endl;
   }

   return 0;
}