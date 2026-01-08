#include <iostream>
using namespace std;

int main() {

long long a, b, c;
cin>>a;
cout<<a<<" ";
while(a!=1)
{
	if(a%2==0) {
	a/=2;
	cout<<a<<" ";
	}

	else if(a%2==1) {
		a=a*3+1; 
		cout<<a<<" ";
	}
}



}
 

