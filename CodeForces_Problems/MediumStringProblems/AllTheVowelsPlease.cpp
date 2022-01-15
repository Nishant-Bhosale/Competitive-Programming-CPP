#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
 
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}

void printDivisors(int n)
{
    // Vector to store half of the divisors
    vector<int> v;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
 
            // check if divisors are equal
            if (n / i == i)
                printf("%d ", i);
            else {
                printf("%d ", i);
 
                // push the second divisor in the vector
                v.push_back(n / i);
            }
        }
    }
 
    // The vector will be printed in reverse
    for (int i = v.size() - 1; i >= 0; i--)
        printf("%d ", v[i]);
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll n;
   cin>>n;

   if(n < 25){
      cout<<-1<<endl;
   }
   else{
      bool flag = false;
      int num = 0;
      for(int i = 5; i <= n; i++){
         if(n % i == 0 && (n / i) >= 5){
            flag = true;
            num = i;
            break;
         }
      }

      if(flag){
         string ans = "";
         for(int i = 0; i < n; i++){
            ans += "aeiou"[(i%num+i/num)%5];
         }
         cout<<ans;
      }else{
         cout<<-1<<endl;
      }
   }
   return 0;
}