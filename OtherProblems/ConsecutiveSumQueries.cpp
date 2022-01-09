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
      int num;cin>>num;
      arr.emplace_back(num);
   }

   int nq;
   cin>>nq;

   for(int i = 0; i < nq; i++){
      int q1, q2, sum = 0;
      cin>>q1>>q2;

      if(q1 == q2){
         cout<<arr[q2]<<endl;
         continue;
      }
      for(int j = q1; j <= q2; j++){
         sum += arr[j];
      }

      cout<<sum<<endl;
   }
   return 0;
}