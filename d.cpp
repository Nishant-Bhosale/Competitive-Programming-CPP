#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int n, m, u, q;
   cin>>n>>m>>u>>q;

   int a[1001][1001];
   int b[1001][1001];

   for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
         cin>>a[i][j];
         b[i][j] = a[i][j];
      }
   }

   //Making difference array

   for(int i = 1; i < n; i++){
      b[i][0] -= a[i - 1][0];
   }

   for(int i = 1; i < m; i++){
      b[0][i] -= a[0][i - 1];
   }

   for(int i = 1; i < n; i++){
      for(int j = 1; j < m; j++){
         b[i][j] = b[i][j] - a[i - 1][j] - a[i][j - 1] + a[i - 1][j - 1];
      }
   }

   for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
         cout<<b[i][j];
      }
   }
   return 0;
}

//UNOPTIMIZED SOLUTION

// #include<bits/stdc++.h>
// using namespace std;

// #define vi vector<int>
// #define vii vector<int,int>
// #define rep(a,b) for(int i = a;i<b;i++)
// #define pi pair<int,int>

// typedef long long ll;

// int main(){
//    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

//    int n, m, u, q;
//    cin>>n>>m>>u>>q;

//    int arr[n][m];
//    for(int i = 0; i < n; i++){
//       for(int j = 0; j < m; j++){
//          cin>>arr[i][j];
//       }
//    }

//    for(int i = 0; i < u; i++){
//       int k, r1, c1, r2, c2;

//       cin>>k>>r1>>c1>>r2>>c2;

//       int maxR = max(r1, r2);
//       int minR = min(r1, r2);
//       int maxC = max(c1, c2);
//       int minC = min(c1, c2);

//       for(int j = 0; j < n; j++){
//          for(int t = 0; t < m; t++){
//             if(!(j > maxR || t > maxC) && !(j < minR || t < minC)){
//                arr[j][t] += k; 
//             }
//          }
//       }
//    }

//    for(int i = 0; i < q; i++){
//       int r1, c1, r2, c2;

//       cin>>r1>>c1>>r2>>c2;

//       int maxR = max(r1, r2);
//       int minR = min(r1, r2);
//       int maxC = max(c1, c2);
//       int minC = min(c1, c2);
//       int sum = 0;
//       for(int j = 0; j < n; j++){
//          for(int t = 0; t < m; t++){
//             if(!(j > maxR || t > maxC) && !(j < minR || t < minC)){
//                sum += arr[j][t];
//             }
//          }
//       }

//       cout<<sum<<endl;
//    }
//    return 0;
// }