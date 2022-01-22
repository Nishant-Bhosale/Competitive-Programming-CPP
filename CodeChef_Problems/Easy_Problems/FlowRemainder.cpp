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

   vector<pair<int,int>> arr;
   while(t--){
      int num1, num2;
      cin>>num1>>num2;

      arr.emplace_back(num1, num2);
   }

   for(int i = 0; i < arr.size(); i++){
      cout<<(arr[i].first % arr[i].second)<<endl;
   }

   return 0;
}