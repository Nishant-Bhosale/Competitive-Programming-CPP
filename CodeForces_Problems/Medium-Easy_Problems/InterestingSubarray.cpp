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
      ll n;
      cin>>n;

      vector<ll> arr(n);

      for(ll i = 0; i < n; i++){
         cin>>arr[i];
      }

      vector<ll> subArr(n + 1, 0);

      ll posL, posR;
      bool flag = false;

      for(ll i = 0; i < n - 1; i++){
         if((max(arr[i + 1], arr[i]) - min(arr[i + 1], arr[i])) >= 2){
            flag = true;
            posL = i + 1;
            posR = i + 2;
            break;
         }
      }
      //Brute force
      // for(ll i = 0; i < n; i++){
      //    for(ll j = i; j < n; j++){
      //       ll maxVal = *max_element(arr.begin() + i, arr.begin() + j + 1);
      //       ll minVal = *min_element(arr.begin() + i, arr.begin() + j + 1);
      //       if((maxVal - minVal) >= (j - i + 1)){
      //          subArr[j - i + 1] = (maxVal - minVal);
      //          posR = (j + 1);
      //          posL = (i + 1);
      //          flag = true;
      //          break;
      //       }
      //    }
      // }

      if(flag){
         cout<<"Yes"<<endl;
         cout<<posL<<" "<<posR<<endl;
      }else{
         cout<<"No"<<endl;
      }
   }

   return 0;
}