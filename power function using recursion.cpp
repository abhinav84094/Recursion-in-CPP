#include <iostream>
using namespace std;
int power(int a, int b){
	int n=a;
	if(b==0) return 1;
	return a* power(a,b-1) ;
}
int main(){
	int a,b;
	cout<<"enter base number : ";
	cin>>a;
	cout<<"enter power number : ";
	cin>>b;
	cout<<power(a,b);
} 
