#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int t;
   cin>>t;

   while(t--){
      int n;
      cin>>n;

      if(n % 21 == 0){
         cout<<"The streak is broken!"<<endl;
         continue;
      }

      string s = to_string(n);
      int m = s.find("21");
      if(m != -1){
         cout<<"The streak is broken!"<<endl;
      }else{
         cout<<"The streak lives still in our heart!"<<endl;
      }
   }

   return 0;
}