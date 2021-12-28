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
      int n;
      cin>>n;
      vi arr;
      vi arr2;
      vi zarr;
      vi oneArr;
      map<int, int> mp;

      for(int i = 0; i < n; i++){
         int num; 
         cin>>num;
         arr.emplace_back(num);
         arr2.emplace_back(num);
         mp[num] = i;
      }

      string s;
      cin>>s;

      for(int i = 0; i < s.size(); i++){
         if(s[i] == '0'){
            zarr.emplace_back(arr[i]);
         }else{
            oneArr.emplace_back(arr[i]);
         }
      }

      sort(zarr.begin(), zarr.end());
      sort(oneArr.begin(), oneArr.end());
      sort(arr.begin(), arr.end());

      reverse(zarr.begin(), zarr.end());
      reverse(oneArr.begin(), oneArr.end());
      reverse(arr.begin(), arr.end());

      for(int i = 0; i < oneArr.size(); i++){
         arr2[mp[oneArr[i]]] = arr[i];
      }

      for(int i = 0; i < zarr.size(); i++){
         arr2[mp[zarr[i]]] = arr[i];
      }

      for(int i = 0; i < arr2.size(); i++){
         cout<<arr2[i]<<" ";
      }
      cout<<endl;
   }

   return 0;
}