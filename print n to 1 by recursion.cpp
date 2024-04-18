#include <iostream>
using namespace std;
void ans(int n){
	cout<<n<<" ";
	if(n==1) return;
	ans(n-1);	
}
int main(){
	int n;
	cout<<"enter a number : ";
	cin>>n;
	ans(n);
}
