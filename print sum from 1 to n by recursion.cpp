#include <iostream>
using namespace std;
void sum1(int s , int n){
	if(n==0){
		cout<<s<<endl;
		return;
	}
	sum1(s+n, n-1);
}
int factsum(int n){
	if(n==1 || n==0) return 1;
	int ans = n+factsum(n-1);
	return ans;
}
int main(){
	int n;
	cout<<"enter a number : ";
	cin>>n;
	sum1(0,n);
	cout<<factsum(n);
	cout<<endl;
}


