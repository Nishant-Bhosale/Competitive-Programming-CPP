// #include<bits/stdc++.h>
// using namespace std;

// #define vi vector<int>
// #define vii vector<int,int>
// #define rep(a,b) for(int i = a;i<b;i++)
// #define pi pair<int,int>

// typedef long long ll;

// int main(){
//    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

//    ll t;
//    cin>>t;

//    while(t--){
//       ll c, m, x;
//       cin>>c>>m>>x;

//       if(c == 0 || m == 0){
//          cout<<0<<endl;
//          continue;
//       }
//       if(c == 1 || m == 1){
//          cout<<1<<endl;
//          continue;
//       }

//       if(x == 0){
//          cout<<(c + m)/3<<endl;
//       }else{
//          if(x == 1){
//             cout<<(c + m + 1) / 3<<endl;            
//          }else{
//             // cout<<(__gcd(__gcd(c, m), x)) - 1<<endl;
//             ll teams = x;
//             ll val;
//             if(x % 2 == 0){
//                val = x / 2;
//                c += val;
//                m += val;

//                teams += (c + m) / 3;
//                cout<<teams<<endl;
//             }else{
//                val = (x / 2) + 1;
//                c += val;
//                m += val - 1;

//                teams += (c + m) / 3;
//                cout<<teams<<endl;
//             }
//          }
//       }
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

   ll t;
   cin>>t;

   while(t--){
      ll c, m, x;
      cin>>c>>m>>x;

      ll diff = max(c, m) - min(c, m);
      
      x += diff;

      if(c > m){
         c -= diff;
      }else{
         m -= diff;
      }

      ll ans = min({c, m, x});

      c -= ans;
      m -= ans;
      x -= ans;

      ans += (c + m) / 3;
      cout<<ans<<endl;
   }

   return 0;
}