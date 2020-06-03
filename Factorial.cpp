#include <iostream>
using namespace std;

int getFactorial(int x);

int main() {
	int n;
	cout<<"Enter a number: "<<flush;
	cin>>n;	
	return 0;
}

int getFactorial(int x){
	if(x==0){
		return 1;
	}else{
		return x*getFactorial(x-1);
	}
	
}
