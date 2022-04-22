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

   ll t;
   cin>>t;
   while(t--){
      ll rating;
      cin>>rating;

      if(rating >= 1900){
         cout<<"Division 1"<<endl;
         continue;
      }

      if(rating <= 1899 && rating >= 1600){
         cout<<"Division 2"<<endl;
         continue;
      }

      if(rating <= 1599 && rating >= 1400){
         cout<<"Division 3"<<endl;
         continue;
      }

      if(rating <= 1399){
         cout<<"Division 4"<<endl;
         continue;
      }
   };

   return 0;
}