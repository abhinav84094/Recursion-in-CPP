#include <iostream>
#include <vector>
using namespace std;
void display(int arr[], int n, int index){
	if(index==n) return;
	cout<<arr[index]<<" ";
	display(arr, n, index+1);
}
int main(){
	int arr[] = {2,1,6,3,9,0,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	vector<int>v(n);
	for(int i=0; i<n; i++){
		v[i]= arr[i];
	}
	display(arr, n, 0);
}
