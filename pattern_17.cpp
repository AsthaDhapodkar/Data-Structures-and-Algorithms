#include<iostream>
using namespace std;
void printl(int n){	
	for(int i=1; i<=n; i++){
		char ch1 = 'A';
		for(int j=1; j<=n;j++){
			if(j<n-i+1){
				cout<<" ";
			}
			else{
				cout<<ch1;
				ch1++;
			}			
		}
		char ch2 = ch1-1;
		for(int j=1; j<i;j++){
			ch2--;
			cout<<ch2;			
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
