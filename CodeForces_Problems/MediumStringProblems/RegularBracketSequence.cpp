#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll cnt1, cnt2, cnt3, cnt4;

   cin>>cnt1>>cnt2>>cnt3>>cnt4;

   if(cnt1 == 0 && cnt4 == 0 && cnt3 > 0){
      cout<<0<<endl;
   }else{
      ll openBrCnt = 0;
      ll closeBrCnt = 0;

      openBrCnt += (2 * cnt1) + (cnt3);
      closeBrCnt += (2 * cnt4) + (cnt3);

      if(openBrCnt == closeBrCnt){
         cout<<1<<endl;
      }else{
         cout<<0<<endl;
      }
   }

   return 0;
}