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

   vector<long long> arr;
   for(int i = 0; i < n; i++){
      ll num;
      cin>>num;
      arr.emplace_back(num);
   }

   sort(arr.begin(), arr.end());

   if(n % 2 == 0){
      cout<<((n / 2) - 1)<<endl;
      int idx = 0;

      for(int i = (n / 2) - 1; i < n; i++){
         cout<<arr[i]<<" ";
         if(idx < (n / 2) - 1){
            cout<<arr[idx]<<" ";
         }
         idx++;
      }

   }else{
      cout<<(n / 2)<<endl;

      int idx = 0;
      for(int i = (n / 2); i < n; i++){
         cout<<arr[i]<<" ";
         if(idx < (n / 2)){
            cout<<arr[idx]<<" ";
         }
         idx++;
      }
   }

   return 0;
}