#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(x) x.begin(), x.end()

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll n;
   cin>>n;
   vector<ll> nums(n);
   for(ll i = 0;i<n;i++) cin>>nums[i];

   vector<int> res(n);
        
        res[0] = 1;
        int pre = 1;
        for(int i = 0; i < n; i++){
            pre *= nums[i];
            if(i != n - 1){
                res[i + 1] = pre;
            }
        }
        for(int i = 0; i < n; i++){
           cout<<res[i]<<" ";
        }
        int post = 1;
        for(int i = n - 1; i >= 0; i--){
            res[i] *= post;
            post *= nums[i];

        }

        for(int i = 0; i < n; i++){
           cout<<res[i]<<" ";
        }

   return 0;
}