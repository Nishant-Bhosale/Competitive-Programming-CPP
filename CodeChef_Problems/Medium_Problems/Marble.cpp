#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
int isVowel(char c){
   if(count(vowels.begin(), vowels.end(), c) >= 1){
      return 1;
   }else{
      return 0;
   }
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int t;
   cin>>t;

   while(t--){
      int n;
      string s, p;
      cin>>n>>s>>p;

      int ans = 1e9;   

      for(char i = 'a'; i <= 'z'; i++){
         int current = 0;

         for(int j = 0; j < n; j++){
            char si = (s[j] == '?' ? i : s[j]);
            char pii = (p[j] == '?' ? i : p[j]);

            if(si == pii){
               continue;
            };
            current += ((isVowel(si) != isVowel(pii)) ? 1 : 2);
         }
         ans = min(ans, current);
      }

      cout<<ans<<"\n";
   }

   return 0;
}