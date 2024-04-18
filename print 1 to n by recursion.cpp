//#include <iostream>
//using namespace std;
//void ans(int i, int n){
//	if(i>n) return;
//	cout<<i<<" ";
//	ans(i+1, n) ;
//}
//int main(){
//	int n;
//	cout<<"enter a number : ";
//	cin>>n;
//	ans(1,n);
//}

#include <iostream>
using namespace std;
void ans(int n){
	if(n==0) return;
	ans(n-1);	
	cout<<n<<" ";
}
int main(){
	int n;
	cout<<"enter a number : ";
	cin>>n;
	ans(n);
}
