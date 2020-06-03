#include <iostream>
#include <limits>
using namespace std;

int getFactorial(int x);
int controlInput(int& x);

int main() {
	int n;
	cout<<"Enter a number: "<<flush;
	cin>>n;
	cout<<n<<"!="<<getFactorial(n)<<endl;	
	return 0;
}

int getFactorial(int x){
	if(x==0){
		return 1;
	}else{
		return x*getFactorial(x-1);
	}
	
}

int controlInput(int& x){

	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(),'\n');

}
