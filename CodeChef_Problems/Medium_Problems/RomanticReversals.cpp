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
//       ll a, s;

//       cin>>a>>s;
      
//       string ans = "";

//       for(int i = 0; i < s; i++){
//          ll temp = s % 10;
//          ll temp2 = a % 10;
//          if(temp <= temp2){
//             int temp3 = s % 100;
//             int sub = temp3 - temp2;
//             string b = to_string(sub);
//             ans += b;
//             s = s / 100;
//             a = a / 10;
//          }else{
//             int sub = temp - temp2;
//             string t = to_string(sub);
//             ans += t;
//             s = s / 10;
//             a = a / 10;
//          }
//       }
//       string mans =  "";
//       for(int i = ans.size() - 1; i >= 0; i--){
//          mans += ans[i];
//       }

//       cout<<(mans)<<endl;
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
      int n, k;
      cin>>n>>k;
      string s;
      cin>>s;

      int i = 0, j = k - 1;
      string ans = "";
      while(i < j){
         ans += s[i];
         ans += s[j];
         i++;
         j--;
      } 

      if(i == j) ans += s[i];
      reverse(ans.begin(), ans.end());
      ans += s.substr(k, n);
      cout<<ans<<"\n";
   }

   return 0;
}