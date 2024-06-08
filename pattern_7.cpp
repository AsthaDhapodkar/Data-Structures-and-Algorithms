#include<iostream>
using namespace std;
void printl(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(j<n-i-1){
				cout<<" ";
			}
			else{
				cout<<"*";
			}
		}
		for(int j=n+0; j<i+n; j++){
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
