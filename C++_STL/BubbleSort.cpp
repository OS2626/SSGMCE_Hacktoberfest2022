#include<bits/stdc++.h> 
using namespace std; 
int main(){
	int n; 
	cin>>n; 
	vector<int> vec(n); 
	for(int i=0; i<n ;i ++){
		cin>>vec[i]; 
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<(n-1-i);j++){
			if(vec[j]>vec[j+1]){
				swap(vec[j+1], vec[j]); 
			}
		}
	}
	for(auto i: vec){
		cout<<i<<" "; 
	}
	return 0; 
}