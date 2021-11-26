#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// int main(){
//    int a,b,c;
//    cin>>a>>b>>c;

//    int max = 0;

//    vector<int> nums;
//    nums.push_back((a + b) * c);
//    nums.push_back(a + b * c);
//    nums.push_back(a * b + c);
//    nums.push_back((a * b) + c);
//    nums.push_back(a + (b * c));
//    nums.push_back(a * (b + c));
//    nums.push_back(a * (b * c));
//    nums.push_back(a + b + c);

//    sort(nums.begin(), nums.end());

//    cout<<nums[nums.size() - 1];
//    return 0;
// }

//Another approach

int main(){
   int a,b,c;
   cin>>a>>b>>c;

   int ans = a + b + c;
   ans = max(ans, a + b * c);
   ans = max(ans, a * b * c);
   ans = max(ans, a * b + c);

   cout<<ans;
   return 0;
}