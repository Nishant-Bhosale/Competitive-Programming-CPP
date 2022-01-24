#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
	int a,b,c,d,n;

   cin>>a>>b>>c>>d>>n;

	if (c<d) swap(c,d),swap(a,b);

	cout<<max(0,n-(c-1)*a-(d-1)*b)<<" "; 

	if (d*b>=n){
		cout<<n/d;
      return 0;
	}
	cout<<(n-d*b)/c+b;
}