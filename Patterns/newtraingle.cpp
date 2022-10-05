#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    char ch = 'E';
    for(int i = 1; i <= n; i++){
        for(int j = i-1; j >= 0; j--){
            cout<<char(ch-j);
        }
        cout<<endl;
    }
    return 0;
}