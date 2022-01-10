#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll a[1001][1001];
ll b[1001][1001];

int main()
{io
ll ans,k;
int n,m,r1,c1,r2,c2,u,q;
cin>>n>>m>>u>>q;


//b will be used as 2d-difference array
for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
    	cin>>a[i][j];
    	b[i][j]=a[i][j];
    }
}


// Making of difference array
for(int i=1;i<n;i++)
b[i][0]-=a[i-1][0];

for(int i=1;i<m;i++)
b[0][i]-=a[0][i-1];

for(int i=1;i<n;i++)
{
for(int j=1;j<m;j++)
b[i][j]=b[i][j]-a[i-1][j]-a[i][j-1]+a[i-1][j-1];
}
// Making modifications
while(u--)
{cin>>k>>r1>>c1>>r2>>c2;
// Three boundary touching indices must be checked for validity before updation
    if(c2+1<m)
    b[r1][c2+1]-=k;

    if(r2+1<n)
    b[r2+1][c1]-=k;

    if(r2+1<n&&c2+1<m)
    b[r2+1][c2+1]+=k;

    b[r1][c1]+=k;
}


//Obtaining Modified Array by performing 2d-prefix array computation on the 
// 2d-difference array
for(int i=1;i<n;i++)
b[i][0]+=b[i-1][0];

for(int i=1;i<m;i++)
b[0][i]+=b[0][i-1];

for(int i=1;i<n;i++)
{
	for(int j=1;j<m;j++)
	b[i][j]=b[i][j]+b[i-1][j]+b[i][j-1]-b[i-1][j-1];	
}


//Making 2d prefix array for answering queries
for(int i=1;i<m;i++)
b[0][i]+=b[0][i-1];

for(int i=1;i<n;i++)
b[i][0]+=b[i-1][0];

for(int i=1;i<n;i++)
{
	for(int j=1;j<m;j++)
	b[i][j]+=(b[i-1][j]+b[i][j-1]-b[i-1][j-1]);
}

//Answering Queries
while(q--)
{	int r1,c1,r2,c2;
	cin>>r1>>c1>>r2>>c2;
     ans=b[r2][c2];
    if(r1-1>=0)
	ans-=b[r1-1][c2];

    if(c1-1>=0)
    ans-=b[r2][c1-1];

	if(r1-1>=0&&c1-1>=0)
	ans+=b[r1-1][c1-1];

	cout<<ans<<"\n";
}
 return 0;}