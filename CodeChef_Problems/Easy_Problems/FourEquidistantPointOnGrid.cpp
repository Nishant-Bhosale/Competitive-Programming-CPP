#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll d;
   cin>>d;

   if(d % 2 == 0){
      cout<<1<<" "<<(1 + (d / 2))<<endl;
      cout<<(1 + d / 2)<<" "<<(1)<<endl;
      cout<<(1 + (d / 2))<<" "<<(1 + d)<<endl;
      cout<<(d + 1)<<" "<<(d / 2 + 1)<<endl;
   }else{
      cout<<-1<<endl;
   }


   return 0;
}