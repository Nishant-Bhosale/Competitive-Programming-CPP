// #include<bits/stdc++.h>
// using namespace std;

// #define vi vector<int>
// #define vii vector<int,int>
// #define rep(a,b) for(int i = a;i<b;i++)
// #define pi pair<int,int>

// typedef long long ll;

// int main(){
//    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

//    int t;
//    cin>>t;

//    while(t--){
//       ll s, remSum = 0;
//       cin>>s;
//       ll temp = s;
//       while(s != 0){
//          ll rem = s % 10;
//          remSum += rem;
//          temp += s / 10;
//          s /= 10;
//       }
      
//       if(remSum / 10 > 10){
//          remSum += remSum / 10;
//       }
      
//       cout<<(temp + remSum / 10)<<endl;
//    }

//    return 0;
// }

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
      ll s;
      cin>>s;
      ll ans = 0;
      ll pow = 1000 * 1000 * 1000;

      while(s > 0){
         while(s < pow) pow /= 10;

         ans += pow;

         s -= pow - pow / 10;
      }

      cout<<ans<<endl;
   }

   return 0;
}