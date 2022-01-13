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

   int ans = 6;
   int num1 = 3;
   int num2 = 4;
   for(int i = 1; i < (n - 2); i++){
      ans += (num1 * num2);
      num1++;
      num2++;
   }

   cout<<ans<<endl;

   return 0;
}