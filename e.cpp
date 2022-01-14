#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

void fillPrimes(vector<int>& prime, int high)
{
    bool ck[high + 1];
    memset(ck, true, sizeof(ck));
    ck[1] = false;
    ck[0] = false;
    for (int i = 2; (i * i) <= high; i++) {
        if (ck[i] == true) {
            for (int j = i * i; j <= high; j = j + i) {
                ck[j] = false;
            }
        }
    }
    for (int i = 2; i * i <= high; i++) {
        if (ck[i] == true) {
            prime.push_back(i);
        }
    }
}
// in segmented sieve we check for prime from range [low, high]
vector<int> segmentedSieve(int low, int high)
{
   vector<int> arr;
    bool prime[high - low + 1];
  //here prime[0] indicates whether low is prime or not similarly prime[1] indicates whether low+1 is prime or not
    memset(prime, true, sizeof(prime));
 
    vector<int> chprime;
    fillPrimes(chprime, high);
    //chprimes has primes in range [2,sqrt(n)]
     // we take primes from 2 to sqrt[n] because the multiples of all primes below high are marked by these
   // primes in range 2 to sqrt[n] for eg: for number 7 its multiples i.e 14 is marked by 2, 21 is marked by 3,
   // 28 is marked by 4, 35 is marked by 5, 42 is marked 6, so 49 will be first marked by 7 so all number before 49
  // are marked by primes in range [2,sqrt(49)]
    for (int i : chprime) {
        int lower = (low / i);
        //here lower means the first multiple of prime which is in range [low,high]
        //for eg: 3's first multiple in range [28,40] is 30         
        if (lower <= 1) {
            lower = i + i;
        }
        else if (low % i) {
            lower = (lower * i) + i;
        }
        else {
            lower = (lower * i);
        }
        for (int j = lower; j <= high; j = j + i) {
            prime[j - low] = false;
        }
    }
   
    for (int i = low; i <= high; i++) {
        if (prime[i - low] == true) {
            arr.emplace_back(i);
        }
    }

    return arr;
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int n;
   cin>>n;

   vector<ll> arr;
   for(int i = 0; i < n; i++){
      ll l, r;

      cin>>l>>r;

      vector<int> res = segmentedSieve(l, r);

      for(int i = 0; i < res.size(); i++){
         cout<<res[i]<<endl;
      }
   } 
   return 0;
}