#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

  ll t;
  cin>>t;
  ll flag = 1;
  while(t--){
    ll n;
    cin>>n;

    ll sum = 0;
    if(n % 2 == 0){
      sum += (n / 2);
      cout<<(n/2)<<endl;
      continue;
    }

    cout<<((flag + n)/2)<<endl;
    flag *= -1;
  }

  return 0;
}