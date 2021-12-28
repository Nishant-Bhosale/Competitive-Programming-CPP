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
      int arr[n];
      int arr2[n];
      vi zarr;
      vi oneArr;
      map<int, int> mp;

      for(int i = 0; i < n; i++){
         cin>>arr[i];
         arr2[i] = arr[i];
         mp[arr[i]] = i;
      }

      string s;
      cin>>s;

      for(int i = 0; i < n; i++){
         if(s[i] == '0'){
            zarr.emplace_back(arr[i]);
         }else{
            oneArr.emplace_back(arr[i]);
         }
      }

      sort(zarr.begin(), zarr.end());
      sort(oneArr.begin(), oneArr.end());
      sort(arr, arr + n);

      reverse(zarr.begin(), zarr.end());
      reverse(oneArr.begin(), oneArr.end());
      reverse(arr, arr + n);
      int i;
      for(i = 0; i < oneArr.size(); i++){
         arr2[mp[oneArr[i]]] = arr[i];
      }

      for(int j = 0; j < zarr.size(); j++){
         arr2[mp[zarr[j]]] = arr[i];
         i++;
      }

      for(int i = 0; i < n; i++){
         cout<<arr2[i]<<" ";
      }
      cout<<endl;
   }

   return 0;
}