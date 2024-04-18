#include <iostream>
#include <string>
using namespace std;

void generate(string s, int n){
	if(n==0) {
		cout<<s<<endl;
		return;
	}
	generate(s+'0', n-1);
	if(s=="") generate(s+'1', n-1);
	else if(s[s.length()-1]=='0') generate(s+'1', n-1);
}

int main(){
	int n;
	cout<<"enter a number : ";
	cin>>n;
	generate("", n);
}
