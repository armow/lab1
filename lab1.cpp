#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	cout << n <<" ";
    start:
		if(n==1){
		    goto end;
		}
		else if(n%2==1){
		    n=3*n+1;
			cout << n <<" ";
		}
		else{
			n=n/2;
			cout << n <<" ";
		}
		goto start;
	end:
		cout <<"\n";
	return 0;
}
