#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b,c) for(int a = b;a<c;a++)
#define pi pair<int,int>
#define all(a) (a).begin(),(a).end()

typedef long long ll;

int gcd(int a, int b){
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int findGCD(int arr[], int n){
    int result = arr[0];
    for (int i = 1; i < n; i++){
        result = gcd(arr[i], result);
 
        if(result == 1){
           return 1;
        }
    }
    return result;
}

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int a,b,c;cin>>a>>b>>c;
  int temp = a;
  int len = b-a+1;
  int arr[b-a+1];
  int even = 0, odd = 0;
  rep(i,0,b-a+1){
    arr[i]=temp;
    temp++;
    if(arr[i]%2==0)even++;
    else odd++;
  }
  if(len==1 && arr[0]!=1) cout<<"YES"<<endl;
  else{
    int result = findGCD(arr,len);
    if(even==0){
      if(result==1) cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
    }
    else if(c==0 && odd!=0){
      cout<<"NO"<<endl;
    }
    else{
      if(c>=odd) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
  }
  
  
}

return 0;
}