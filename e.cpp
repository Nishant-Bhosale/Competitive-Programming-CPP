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

   ll num;
   cin>>num;

   ll originalNumber = num;
   ll ans = 0;
   while(originalNumber != 0){
      ll remainder = originalNumber % 10;

      ans += (remainder * remainder * remainder);

      originalNumber /= 10;
   }

   if(ans == num){
      cout<<"It is armstrong number"<<endl;
   }else{
      cout<<"It is not an armstrong number"<<endl;
   }

   return 0;
}