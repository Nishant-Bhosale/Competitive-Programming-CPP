#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    
    for(int i = 1; i<=n; i++){
        string word;
        cin>>word;
        
        if(word.length() <= 10){
            cout<<word<<endl;
        }else{
            cout<<word.at(0)<<word.length()-2<<word.at(word.length() - 1)<<endl;
        }
    }
    
    return 0;
}