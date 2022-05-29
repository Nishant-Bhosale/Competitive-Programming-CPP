#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(x) x.begin(), x.end()

typedef long long ll;

float roundF(float var)
{
    // 37.66666 * 100 =3766.66
    // 3766.66 + .5 =3767.16    for rounding off value
    // then type cast to int so value is 3767
    // then divided by 100 so the value converted into 37.67
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}
 

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   string s  = "1 2 $3 4 $5 $6 7 8$ $9 $10$";

   float num = 50;

   for(int i = 0; i < s.size(); i++){
      if(s[i] == '$' && s[i - 1] == ' ' && i != 0){
         int j = i + 1;
         string a = "";
         while(j < s.size() && (isdigit(s[j]) || s[j] == '.') && s[j] != ' '){
            if(s[j + 1] == '$'){
               a = "";
               break;
            } 
            
            a += s[j];
            j++;
         }
         if(a != ""){
            float f = stof(a);
            f -= f * (num / 100);
            // cout<<fixed;
            float m = roundF(f);
            cout<<roundF(f)<<endl;
            string x = to_string(m);
            cout<<x<<endl;
            int sz = x.size();
            cout<<sz<<endl;
            s.replace(i + 1, sz, x);
         }
      }

   }
      cout<<s<<endl;

   return 0;
}