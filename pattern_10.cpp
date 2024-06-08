#include<iostream>
using namespace std;
void printl(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=n; i<2*n-1; i++){
		for(int j=0; j<2*n-i-1; j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
int main(){
	int t;
	cin >> t;
	for(int i=0; i<t; i++){
		int n;
		cin >> n;
		printl(n);
	}
	return 0;
}
