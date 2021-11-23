 #include<bits/stdc++.h>
using namespace std;
set<int>a,b;
int main(){
int n,m,i,j;
 
char ch;
cin>>n>>m;
for(i=0;i<n;i++)
for(j=0;j<m;j++){
    cin>>ch;
    if(ch=='S'){
      a.insert(i);
      b.insert(j);
   }
}
cout<<m*n-a.size() * b.size();
 
return 0;
}