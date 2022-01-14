#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int n;
   cin>>n;

   for(int i = 0; i < n; i++){
      string a, b;
      cin>>a>>b;

      int k,j;
      for(k = 0, j = 0; k < b.size(); k++){
         if(a[j] == b[k]){
            j++;
         }else if(b[k] != b[k - 1]){
            break;
         }
      }

      if(k == b.size() && j == a.size()){
         cout<<"YES"<<endl;
      }else{
         cout<<"NO"<<endl;
      }
   }

   return 0;
}