#include <iostream>
#include <vector>
using namespace std;
 
bool solve()
{
    int nbElem;
    cin >> nbElem;
 
    int extSize = nbElem+2;
    vector<int> arr1(extSize), arr2(extSize);
    vector<int> diff(extSize, 0);
 
    for (int i = 1; i <= nbElem; ++i) {
        cin >> arr1[i];
    }
 
    for (int i = 1; i <= nbElem; ++i) {
        cin >> arr2[i];
        diff[i] = arr2[i] - arr1[i];
    }
 
    int cntModif = 0;
    for (int i = 0; i < extSize-1; ++i) {
        if (diff[i] < 0) {
            return false;
        }
        if (diff[i] != diff[i+1]) {
            ++cntModif;
        }
    }
 
    return (cntModif <= 2);
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int nbQueries;
    cin >> nbQueries;
 
    for (int iQuery = 0; iQuery < nbQueries; ++iQuery) {
        if (solve()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
 
    return 0;
}