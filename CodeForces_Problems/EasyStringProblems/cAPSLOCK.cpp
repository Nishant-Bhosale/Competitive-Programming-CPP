#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   string s;
   cin>>s;

   if(s.size() == 1){
      if(isupper(s[0])){
         transform(s.begin(), s.end(), s.begin(), ::tolower);
         cout<<s<<endl;
      }else{
         transform(s.begin(), s.end(), s.begin(), ::toupper);
         cout<<s<<endl;
      }
   }else{
      bool flag = false;
      for(int i = 0; i < s.size(); i++){
         if(isupper(s[i])){
            flag = true;
         }else{
            flag = false;
            break;
         }
      }

      if(flag){
         transform(s.begin(), s.end(), s.begin(), ::tolower);
         cout<<s<<endl;
      }else{
         if(islower(s[0])){
            bool flag = true;
            for(int i = 1; i < s.size(); i++){
               if(isupper(s[i])){
                  flag = true;
               }else{
                  flag = false;
                  break;
               }
            }

            if(flag){
               s[0] = toupper(s[0]);
               for(int i = 1; i < s.size(); i++){
                  s[i] = tolower(s[i]);
               }
               cout<<s<<endl;
            }else{
               cout<<s<<endl;
            }
         }else{
            cout<<s<<endl;
         }
      }
      
   }


   return 0;
}