#include<iostream>
using namespace std;
 
int main(){
    int w;
    
    cin>>w;
    
    if(w % 2 == 1 || w == 2){
        cout<<"NO";
    }else{
        for(int i = 1; i<=w; i++){
            for(int j = 1; j<=w; j++){
                if(j % 2 == 0 && i % 2 == 0 && i + j == w){
                    cout<<"YES";
                    return 0;
                }
            }
        }
    }
    return 0;
}
