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

   int t1 = 1;
   int minVal = 9999999;
   for(int i = 1; i < 101; i++){
      int sum = 0;
      for(int j = 0; j < arr.size(); j++){
         sum += max(abs(arr[j] - i) - 1, 0);
      } 

      if(sum < minVal){
         minVal = sum;
         t1 = i;
      }
   }

   cout<<t1<<" "<<minVal<<endl;

   return 0;
}