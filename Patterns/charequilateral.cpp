#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin>>n;
    char ch = 'A';
    for(int i = 1; i < n; i++){
        for(int j = 1; j < n-i+1; j++){
            cout<<" ";
        }
        for(int k = 0; k < i; k++ ){
            cout<<char(ch+k);
        }
        for(int l = i-2; l >= 0; l--){
            cout<<char(ch+l);
        }
        cout<<endl;
    }
    return 0;
}