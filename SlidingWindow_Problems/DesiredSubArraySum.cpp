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
   for(int i = 0; i < n; i++){
      int num; cin>>num;
      arr.emplace_back(num);
   }

   int bgI = 0, bgE = 1, maxVal = -99999;

   for(int i = 0; i < n; i++){
      if(arr[bgI] + arr[bgE] > maxVal && bgE < n && bgI < n){
         maxVal = arr[bgI] + arr[bgE];
      }
      bgI++;
      bgE++;
   }

   cout<<maxVal<<endl;

   return 0;
}