#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int n;
   cin>>n;

   vi arr;
   vi res;
   int prod = 1;
   for(int i = 0; i < n; i++){
      int num; cin>>num;
      arr.emplace_back(num);
      if(num != 0){
         prod *= num;
      }
   }

   for(int i = 0; i < n; i++){
      if(arr[i] == 0){
         res.emplace_back(prod);
         continue;
      }
      res.emplace_back(prod / arr[i]);
   }

   for(int i = 0; i < n; i++){
      cout<<res[i]<<endl;
   }
   return 0;
}