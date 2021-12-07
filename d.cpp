#include<bits/stdc++.h>
using namespace std;
int n;
char s[10005];
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		scanf("%s",s+1);
		int x=0;
		for(int i=1;i<=n;i++)if(s[i]!='?'){
			x=i;break;
		}

		for(int i=x-1;i>=1;i--)s[i]=(s[i+1]=='R'?'B':'R');
		
		for(int i=x+1;i<=n;i++)
			if(s[i]=='?')s[i]=(s[i-1]=='R'?'B':'R');
		printf("%s\n",s+1);
	}
	return 0;
}