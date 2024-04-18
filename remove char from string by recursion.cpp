//#include <iostream>
//#include <string>
//using namespace std;
//void removechar(string ans, string original){
//	if(original.length()==0){
//		cout<<ans;
//		return;
//	}
//	char ch = original[0];
//	if(ch=='a') removechar(ans,original.substr(1));
//	else removechar(ans+ch, original.substr(1));
//}
//int main(){
//	string str = "Physics Wallah";
//	removechar(" ",str);
//}


#include <iostream>
#include <string>
using namespace std;
void removechar(string ans, string original, int index){
	if(index == original.length()){
		cout<<ans;
		return;
	}
	char ch = original[index];
	if(ch=='a') removechar(ans,original,index+1);
	else removechar(ans+ch, original, index+1);
}
int main(){
	string str = "Physics Wallah";
	removechar("",str,0);
}
