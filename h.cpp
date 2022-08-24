#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(x) x.begin(), x.end()

typedef long long ll;

//    int ans = 0;
// int sum(int start, int nums){
//    if(start > nums) return ans;
//    ans += start;
//    start++;
//    return sum(start, nums);
// }

// void sum(int start, int ans){
//    if(start < 1){
//       cout<<ans<<endl;
//       return;
//    }

//    sum(start - 1, ans + start);
// }

// int sum(int n){
//    if(n < 1){
//       return 0;
//    }
//    return n + sum(n - 1);
// }

// int factorial(int n){
//    if(n == 1 || n == 0){
//       return 1;
//    }
//    return n * factorial(n - 1);
// }

// vector<int> arr {3, 3, 1, 4, 6, 7, 10, 32};
// int sz = arr.size();
// void reverseArray(int left){
//    if(left >= sz / 2) return;
//    swap(arr[left], arr[sz - left - 1]);
//    reverseArray(left + 1);
// }

// bool isPalindrome(string& s, int left, int right){
//    if(left >= right){
//       return true;
//    }

//    if(s[left] != s[right]) return false;
//    return isPalindrome(s, left + 1, right - 1);
// }

int fib(int n){
   if(n == 0) return 0;
   if(n == 1 || n == 2) return 1;
   return fib(n - 1) + fib(n - 2);
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   // reverseArray(0);
   // string s = "assssa";
   // isPalindrome(s, 0, s.size() - 1) ? cout<<"Is Palindrome? Yup!" : cout<<"NOT Palindrome!";
   cout<<fib(7);
   return 0;
}