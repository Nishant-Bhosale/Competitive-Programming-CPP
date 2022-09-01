#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define ll long long
#define all(x) x.begin(), x.end()

ll polynomialFunc(ll randomNum, ll asciiCode, ll temp)
{
    return asciiCode + (temp * randomNum); 
}

int main(){
    string s;
    cin>>s;

    vector<vector<pair<int,int>>>arr (4,vector<pair<int,int>>(s.size()));

    for(int i = 0; i < s.size(); i++){
        ll temp = rand()%100;

        // ASCII value of digits
        ll asciiCode = s[i];

         int idx = 0;
         while(idx < 4){
            ll randomNum = rand() % 100;
            ll polyNum = polynomialFunc(randomNum, asciiCode, temp);
            arr[idx][i] = make_pair(randomNum, polyNum);
            idx++;
         }
    }

    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr[i].size(); j++){
            cout<<arr[i][j].first<<" "<<arr[i][j].second<<endl;
        }
    }

    string ans = "";
    for(int i=0; i < s.size(); i++){
        ll x0 = arr[0][i].first, x1 = arr[3][i].first;
        ll y0 = arr[0][i].second, y1 = arr[3][i].second;
        
        ans += (char)(((y1 * x0) - (y0 * x1)) / (x0 - x1));
    }

    cout<<ans;
}
