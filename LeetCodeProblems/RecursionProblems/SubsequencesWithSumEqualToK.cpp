#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(x) x.begin(), x.end()

typedef long long ll;

vector<vector<int>> ans;
vector<int> arr = {1, 3, 4, 5, 1};
void getAllSubsetsWithSumEqualToK(int i, vector<int>& temp, int sum, int k){
   if(ans.size() == 1) return;
   if(i == arr.size()){
      if(sum == k){
         ans.push_back(temp);
      }
      return;
   }
   temp.push_back(arr[i]);
   sum += arr[i];
   getAllSubsetsWithSumEqualToK(i + 1, temp, sum, k);
   sum -= arr[i];
   temp.pop_back();
   getAllSubsetsWithSumEqualToK(i + 1, temp, sum, k);
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   vector<int> temp;
   getAllSubsetsWithSumEqualToK(0, temp, 0, 5);
   for(auto it : ans){
      for(auto el : it){
         cout<<el<<" ";
      }
      cout<<endl;
   }
   return 0;
}