#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 44, 10};
   ll val;
   cin>>val;
   ll left = 0, ans = -1, right = 9;

   while(left <= right){
      ll mid = left + (right - left) / 2;

      if(arr[mid] == val){
         ans = mid;
         break;
      }
      if(arr[mid] < val){
         left = mid + 1;
      }else{
         right = mid - 1;
      }
   }
   cout<<ans<<endl;
   return 0;
}