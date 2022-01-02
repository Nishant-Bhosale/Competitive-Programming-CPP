#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int n, k;
   cin>>n>>k;

   vi arr;
   vector<pair<int,int>> coords;

   for(int i = 0; i < n; i++){
      int num;
      cin>>num;
      arr.emplace_back(num);
   }

   int indBeg = 0, indEnd = 1;

   for(int i = 0; i < n; i++){
      if(arr[indBeg] + arr[indEnd] > k && indEnd < n && indBeg < n){
         indBeg++;
      }
      if(arr[indBeg] + arr[indEnd] < k && indEnd < n && indBeg < n){
         indEnd++;
      }
      if(arr[indBeg] + arr[indEnd] == k && indEnd < n && indBeg < n){
         coords.emplace_back(indBeg, indEnd);
         indEnd++;
      }
   }

   for(auto it : coords){
      cout<<"HE"<<endl;
      // cout<<it.first<<" "<<it.second<<endl;
   }
   return 0;
}