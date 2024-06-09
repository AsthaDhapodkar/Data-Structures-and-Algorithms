#include<iostream>
using namespace std;
void printl(int n){
	int count = 1;
	for(int i=1; i<=n; i++){
		for(char ch='A'; ch<'A'+i; ch++){
			cout<<ch<<" ";
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
