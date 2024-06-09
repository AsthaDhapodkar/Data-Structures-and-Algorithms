#include<iostream>
using namespace std;
void printl(int n){
	char ch = 'A';
	int count = 1;
	while(count != n){
		ch++;
		count++;
	}
	for(int i=0; i<n; i++){
		char ch2=ch-i;
		for(int j=0; j<=i; j++){
			cout<<ch2;
			ch2++;
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
