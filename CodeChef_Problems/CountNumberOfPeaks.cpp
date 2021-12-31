#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    if(n < 3){
	        cout<<0<<endl;
	    }else{
	        cout<<(pow(3, n - 3) * (n - 2) * 10)<<endl;
	    }
	}
	return 0;
}
