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

      vi stoneArr;

      for(int i = 0; i < n; i++){
         int num;
         cin>>num;
         stoneArr.emplace_back(num);
      }

      int maxE = -1, minE = 1000, minPos = 0, maxPos = 0;

      for(int i = 0; i < n; i++){
         if(stoneArr[i] < minE){
            minE = stoneArr[i];
            minPos = i;
         }
         if(stoneArr[i] > maxE){
            maxE = stoneArr[i];
            maxPos = i;
         }
      }

      int minAns = min({
         max(minPos, maxPos) + 1,
         (n - 1) - min(minPos, maxPos) + 1,
         (n - 1) - minPos + maxPos + 2,
         (n - 1) - maxPos + minPos + 2
      });

      cout<<minAns<<endl;
   }

   return 0;
}