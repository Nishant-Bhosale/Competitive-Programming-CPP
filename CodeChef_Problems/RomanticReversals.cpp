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
      int n,k;
      cin>>n>>k;

      string s; 
      cin>>s;
      

      int idx = k - 1;

      string halfAns = "";
      for(int i = k; i < n; i++){
         halfAns += s[i];
      }
      string mainA = "";
      string first = "";
      for(int i = 0; i <= idx; i++){
         first += s[i];
      }

      while(idx != 0){
         reverse(first.begin(), first.end());
         mainA += first.back();
         first.pop_back();
         idx--;
      }
      mainA += first;

      reverse(mainA.begin(), mainA.end());

      cout<<mainA + halfAns<<endl;
   }

   return 0;
}