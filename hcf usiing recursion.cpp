#include <iostream>
using namespace std;
int hcf(int a, int b){
	for(int i=min(a,b); i>=2; i--){
		if(a%i==0 && b%i==0) return i;
	}
	return 1;
}

int Hcf(int a, int b){
	int i= min(a,b);
	int j= max(a,b);
	if(j%i==0) return i;
	else return Hcf(i, j-i);
}

int gcd(int a, int b){
	if(a==0) return b;
	else return gcd(b%a, a);
}

int main(){
	int a,b;
	cout<<"enter two numbers : ";
	cin>>a>>b;
//	cout<<hcf(a,b)<<endl;
//	cout<<Hcf(a,b)<<endl;
	cout<<gcd(a,b)<<endl;
}
