#include<iostream>
using namespace std;
void printl(int n){
	for(int i=1; i<=n; i++){
		for(int j=0; j<n-i+1; j++){
			cout<<j+1;
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
