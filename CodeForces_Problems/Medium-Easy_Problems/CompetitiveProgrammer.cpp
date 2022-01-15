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
        string s;
        cin>>s;

        int cntE = 0;
        int cntZ = 0;
        int sum = 0;

        if(count(s.begin(), s.end(), '0') == s.size()){
            cout<<"red"<<endl;
            continue;
        }
        for(int i = 0; i < s.size(); i++){
            sum += s[i] - '0';
            if((s[i] - '0') % 2 == 0 && s[i] != '0'){
                cntE++;
            }
            if(s[i] == '0'){
                cntZ++;
            }
        }

        cout<<((sum % 3 == 0 && cntZ + cntE >= 2 && cntZ >= 1) ? "red" : "cyan")<<endl;
    }

    return 0;
}