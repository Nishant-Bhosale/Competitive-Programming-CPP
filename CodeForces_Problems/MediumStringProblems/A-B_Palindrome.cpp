#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

void no() {
  cout << "-1" << endl;
}

void solve() {
  int a, b;
  cin >> a >> b;
  string s;
  cin >> s;
  for (int times = 0; times < 2; times++) {
    for (int i = 0; i < (int) s.size(); i++) {
      int j = (int) s.size() - i - 1;
      if (s[i] != '?') {
        if (s[j] == '?') {
          s[j] = s[i];
        } else if (s[i] != s[j]) {
          no();
          return;
        }
      }
    }
    reverse(s.begin(), s.end());
  }
  a -= count(s.begin(), s.end(), '0');
  b -= count(s.begin(), s.end(), '1');
  int ques = count(s.begin(), s.end(), '?');
  bool emptyMid = (s.size() % 2 == 1 && s[s.size() / 2] == '?');
  if (a < 0 || b < 0 || a + b != ques || (emptyMid && a % 2 == 0 && b % 2 == 0)) {
    no();
    return;
  }
  if (a % 2 == 1 || b % 2 == 1) {
    int i = s.size() / 2;
    if (s[i] != '?') {
      no();
      return;
    }
    s[i] = (a % 2 == 1 ? '0' : '1');
    if (a % 2 == 1) {
      a--;
    } else {
      b--;
    }
  }
  if (a % 2 == 1 || b % 2 == 1) {
    no();
    return;
  }
  for (int i = 0; i < (int) s.size(); i++) {
    if (s[i] == '?') {
      int j = s.size() - i - 1;
      if (a > 0) {
        a -= 2;
        s[i] = s[j] = '0';
      } else {
        b -= 2;
        s[i] = s[j] = '1';
      }
    }
  }
  cout << s << endl;
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;

   while(t--){
      solve();
   }

   return 0;
}