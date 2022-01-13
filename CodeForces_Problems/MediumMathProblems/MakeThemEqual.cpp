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

   vi st;
   for(int i = 0; i < n; i++){
      int num;
      cin>>num;
      st.emplace_back(num);
   }
   
   sort(st.begin(), st.end());
   st.resize(unique(st.begin(), st.end()) - st.begin());

   if(st.size() > 3){
      cout<<-1<<endl;
   }else{
      if(st.size() == 1){
         cout<<0<<endl;
      }
      if(st.size() == 3){
         if(st[2] - st[1] == st[1] - st[0]){
            cout<<st[2] - st[1]<<endl;
         }else{
            cout<<-1<<endl;
         }
      }

      if(st.size() == 2){
         if((st[0] + st[1]) % 2 == 0){
            cout<<(abs(st[0] - st[1]) / 2)<<endl;
         }else{
            cout<<(abs(st[0] - st[1]))<<endl;
         }
      }
   }

   return 0;
}