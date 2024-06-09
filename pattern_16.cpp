#include<iostream>
using namespace std;
void printl(int n){
	char ch = 'A';
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<ch<<" ";
		}
		ch++;
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

