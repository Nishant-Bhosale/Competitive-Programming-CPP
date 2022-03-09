#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

void leftRotate(int *nums, int n, int k){
   k %= n;
   reverse(nums, nums + k);
   reverse(nums + k, nums + n);
   reverse(nums, nums + n);
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;

   while(t--){
      int n;
      cin>>n;
      
      int arr[n];
      for(int i = 0; i < n; i++){
         cin>>arr[i];
      }
      int ans [n - 1];
      for(int i = n - 1; i >= 0; i--){
         int x;
         for(x = 0; x < i; x++){
            if(arr[x] == i + 1){
               break;
            }
         }

         if(x == i) x =- 1;
         leftRotate(arr, i + 1, x + 1);
         ans[i] = x + 1;
      }

      for(int i = 0; i < n; i++){
         cout<<ans[i]<<" ";
      }

      cout<<endl;
   }

   return 0;
}