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
      int num;
      cin>>num;
      arr.emplace_back(num);
   }

   vi psum(n);
   psum[0] = arr[0];
   for(int i = 1; i < n; i++){
      psum[i] = psum[i - 1] + arr[i];
   }

   for(int i = 0; i < n; i++){
      cout<<psum[i]<<" ";
   }
   cout<<endl;
   return 0;
}