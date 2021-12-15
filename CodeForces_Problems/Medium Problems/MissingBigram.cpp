#include<bits/stdc++.h>
using namespace std;
int t,n;
bool pd;
string s[100];
int main(){
cin>>t;
	while(t--){
	cin>>n;pd=0;
	for(int i=1;i<=n-2;++i){
		cin>>s[i];
	}
	cout<<s[1];
	for(int i=2;i<=n-2;++i){
		if(s[i][0]==s[i-1][1])cout<<s[i][1];
		else {
			pd=1;
			cout<<s[i];
		}
	}
	if(pd==0)cout<<"a";
	cout<<endl;
	}
	return 0;
}