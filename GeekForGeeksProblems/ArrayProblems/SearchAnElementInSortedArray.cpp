#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(x) x.begin(), x.end()

typedef long long ll;

int binSearch(int left, int right, int val, vector<int> arr){
   int res = -1;
   while(left <= right){
      int mid = left + (right - left) / 2;
      if(arr[mid] == val){
         res = mid;
         break;
      }
      if(arr[mid] > val){
         right = mid - 1;
      }
      if(arr[mid] < val){
         left = mid + 1;
      }
   }

   return res;
}

int findPivot(vector<int> A, int low, int high){
   if(high < low){
      return -1;
   }

   if(high == low){
      return low;
   }

   int mid = low + (high - low)/2 ;

   if(A[mid] > A[mid + 1] && high > mid){
      return mid;
   }

   if(A[mid] < A[mid - 1] && low < mid){
      return mid - 1;
   }

   if(A[low] >= A[mid]){
      return findPivot(A, low, mid - 1);
   }

   return findPivot(A, mid + 1, high);
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int n, num;
   cin>>n>>num;
   vector<int> arr(n);
   for(int i = 0;i<n;i++) cin>>arr[i];

   int left = 0, right = n - 1, ind = 0;

   int pivot = findPivot(arr, left, right);

   if(pivot == -1){
      return binSearch(0, n - 1, num, arr);
   }

   if(arr[pivot] == num){
      cout<<pivot<<endl;
      return pivot;
   }

   int ans = binSearch(0, pivot - 1, num, arr);
   cout<<ans<<endl;
   if(ans > -1){
      cout<<ans<<endl;
      return 0;
   }

   ans = binSearch(pivot, n - 1, num, arr);
   cout<<ans<<endl;
   if(ans > -1){
      cout<<ans<<endl;
      return 0;
   }

   cout<<"Not Found";

   return 0;
}