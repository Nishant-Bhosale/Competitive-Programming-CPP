#include<iostream>
#include<algorithm>
using namespace std;

int main(){
   int n, k, l, c, d, p, nl, np;

   cin>>n>>k>>l>>c>>d>>p>>nl>>np;

   int drinkQ = k * l;

   int toastN = drinkQ / nl;
   int minVal = min(toastN, min(c * d, p / np)) / n;
   cout<<minVal<<endl;
   return 0;
}