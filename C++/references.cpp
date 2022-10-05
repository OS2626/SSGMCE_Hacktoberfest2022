#include<iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt", "r", stdin);
	//for getting output from output.txt
	freopen("output.txt", "w", stdout);
#endif

	int num;
	cin >> num;

	//refernce for num
	int &refnum = num;
	cout << refnum << endl;
	return 0;
}