#include<iostream>
using namespace std;
void printl(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			cout<<i+1;
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
