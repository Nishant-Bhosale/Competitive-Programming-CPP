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
   vi arr;
   for(int i = 0; i < t; i++){
      int num;
      cin>>num;
      arr.emplace_back(num);
   }

   sort(arr.begin(), arr.end());

   

   return 0;
}