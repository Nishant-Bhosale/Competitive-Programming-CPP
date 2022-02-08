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
      int n;
      cin>>n;
      vector<int> arr;
      for(int i = 0; i < n; i++){
         int num;
         cin>>num;
         arr.emplace_back(num);
      }

      int64_t ans = 0;
      for(int j = 29; j >= 0; j--){
         int64_t cnt = 0;
         for(int i = 0; i < n; i++){
            if(arr[i] >= (1<<j) && (arr[i] < (1<<(j+1)))){
               cnt++;
            }
         }

         ans += cnt*(cnt - 1) / 2;
      }

      cout<<ans<<endl;
   }

   return 0;
}