#include <iostream>
using namespace std;
int power1(int a, int b){
	if(a==0) return 0;
	int p=1;
	for(int i=1; i<=b; i++){
		p*=a ;
	}
	return p;
}

int power2(int a, int b){
	if(b==0) return 1;
	return a*power2(a, b-1);
}

int main(){
	int a,b;
	cout<<"enter base : ";
	cin>>a;
	cout<<"enter exponent : ";
	cin>>b;
	cout<<a<<"raised to the power "<<b<<" = "<<power1(a , b)<<endl;
	cout<<a<<"raised to the power "<<b<<" = "<<power2(a , b)<<endl;
}
